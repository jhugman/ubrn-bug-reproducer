# ubrn-bug-reproducer

A bug reproducer project.

Change the Rust in `rust` directory.

Change the typescript in `example/src/App.tsx` to exercise the Rust.

Re-generate the library each time you change the rust with:

```sh
yarn ubrn:ios
yarn ubrn:android
```

Once you have reproduced the bug you're seeing, then push the changes to your repro project.

You should then be able to reference the repro project when filing an issue with uniffi-bindgen-react-native.

## Usage

On first cloning, run:
```sh
yarn
```

You can regenerate bindings with:
```sh
yarn ubrn:ios
yarn ubrn:android
```

To run the example project:
```sh
yarn example start
```


## Contributing

See the [contributing guide](CONTRIBUTING.md) to learn how to contribute to the repository and the development workflow.

## License

MIT

---

Made with [create-react-native-library](https://github.com/callstack/react-native-builder-bob)
