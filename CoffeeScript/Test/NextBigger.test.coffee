import {expect} from "chai"
import {NextBigger} from "../Source/NextBigger.coffee"

describe 'Basic tests', ->
    it 'Small numbers', ->
        expect NextBigger.nextBigger 12
            .toBe 21

        expect NextBigger.nextBigger 513
            .toBe 531

        expect NextBigger.nextBigger 2017
            .toBe 2071

        expect NextBigger.nextBigger 414
            .toBe 441

        expect NextBigger.nextBigger 144
            .toBe 414
   