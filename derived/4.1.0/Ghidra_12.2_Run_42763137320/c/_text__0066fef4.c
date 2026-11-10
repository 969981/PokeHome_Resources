/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066fef4; name: FUN_.text__0066fef4
 */


undefined8 FUN__text__0066fef4(long param_1)

{
  if (param_1 != 0) {
    FUN__text__0065a4c8();
    if (*(long *)(param_1 + 0xd8) != 0) {
      FUN__text__0065a2b8(*(long *)(param_1 + 0xd8),param_1);
    }
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN__text__0065c29c();
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    FUN__text__00656c1c(param_1 + 0x12d8,0);
    *(undefined4 *)(param_1 + 0x16f0) = 0;
    if ((*(ushort *)(param_1 + 0x15a4) >> 10 & 1) != 0) {
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0x14f0));
    }
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1e8));
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    FUN__text__00677c80(param_1);
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1148));
    *(undefined8 *)(param_1 + 0x1148) = 0;
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x11b8));
    *(undefined8 *)(param_1 + 0x11b8) = 0;
    FUN__text__00677dec(param_1);
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    if ((*(byte *)(param_1 + 0xf68) >> 1 & 1) != 0) {
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0xf50));
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfd;
    }
    *(undefined8 *)(param_1 + 0xf50) = 0;
    FUN__text__006700b8(param_1);
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1130));
    *(undefined8 *)(param_1 + 0x1130) = 0;
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1120));
    *(undefined8 *)(param_1 + 0x1120) = 0;
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1138));
    *(undefined8 *)(param_1 + 0x1138) = 0;
    FUN__text__006532b4(param_1,1);
    FUN__text__006567dc(param_1);
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1638));
    *(undefined8 *)(param_1 + 0x1638) = 0;
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1640));
    *(undefined8 *)(param_1 + 0x1640) = 0;
    thunk_FUN__text__006783e4(*(undefined8 *)(param_1 + 0x1288));
    FUN__text__00662dac(param_1);
    if (*(long *)(param_1 + 0xe8) != 0) {
      FUN__text__00667a44(param_1,1,2);
      *(int *)(*(long *)(param_1 + 0xe8) + 4) = *(int *)(*(long *)(param_1 + 0xe8) + 4) + -1;
      FUN__text__00667a8c(param_1,1);
    }
    FUN__text__006782c0(param_1 + 0x15a8);
    FUN__text__0066fe70(param_1);
    FUN__text__006783e4(param_1);
  }
  return 0;
}


