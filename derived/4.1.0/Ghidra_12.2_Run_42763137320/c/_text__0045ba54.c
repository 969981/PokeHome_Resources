/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045ba54; name: FUN_.text__0045ba54
 */


void FUN__text__0045ba54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = param_2[3];
  param_2[3] = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  uVar3 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  param_1[0xe] = param_2[0xe];
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    (**(code **)(*(long *)param_1[0xf] + 0x18))();
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
  }
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)((long)param_2 + 0x8c);
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  if ((param_1[0x14] != 0) && (*(char *)(param_1 + 0x15) != '\0')) {
    (**(code **)(*(long *)param_1[0x13] + 0x18))();
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  param_1[0x14] = 0;
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_2[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((long)param_1 + 0x10c) = *(undefined4 *)((long)param_2 + 0x10c);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  FUN__text__00451da8(param_1 + 0x18,param_2 + 0x18);
  FUN__text__0045cc00(param_1 + 0x1d);
  param_1[0x1d] = param_2[0x1d];
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x1e) = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  return;
}


