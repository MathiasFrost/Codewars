fn string_to_industrial(time: &str) -> f64 {
    let (hours, minutes) = time.split_once(':').unwrap();
    let hours: f64 = hours.parse().unwrap();
    let minutes: f64 = minutes.parse().unwrap();
    hours + (minutes / 60.0)
}

fn to_industrial(minutes: u32) -> f64 {
    minutes as f64 / 60.0
}

fn to_normal(time: f64) -> String {
    let total_seconds = (time * 3600.0).round();
    let hours = (total_seconds / 3600.0).trunc();
    let minutes = (total_seconds % 3600.0 / 60.0).round();
    format!("{:.0}:{:02.0}", hours, minutes)
}
