/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e0340; name: FUN_.text__004e0340
 */


void FUN__text__004e0340(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[10] = param_2[10];
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    (**(code **)(*(long *)param_1[0xb] + 0x18))();
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)((long)param_2 + 0x6c);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  if ((param_1[0x10] != 0) && (*(char *)(param_1 + 0x11) != '\0')) {
    (**(code **)(*(long *)param_1[0xf] + 0x18))();
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_2[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar1 = param_2[0x13];
  uVar2 = param_2[0x14];
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  param_1[0x13] = uVar1;
  param_1[0x14] = uVar2;
  param_2[0x13] = 0;
  *(undefined8 *)((long)param_2 + 0xa4) = 0x2b;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  if (param_1[0x17] != 0) {
    FUN__text__00400fc0(0);
  }
  param_1[0x17] = param_2[0x17];
  param_2[0x17] = 0;
  return;
}


