/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d9bdc; name: FUN_.text__004d9bdc
 */


void FUN__text__004d9bdc(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  ushort uVar3;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  plVar1 = param_1 + 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(ushort *)((long)param_1 + 0x14a) = *(ushort *)((long)param_1 + 0x14a) & 0xf800;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN__text__0046aeb0(param_1[0x3a],plVar1,param_1 + 0x2c,param_1[0x39]);
  *(undefined4 *)((long)param_1 + 0x174) = 0x42ca0000;
  FUN__text__0045e544(param_1[0x3a],param_1 + 0x11,plVar1);
  FUN__text__004d9d5c(param_1);
  uVar3 = *(ushort *)(param_1 + 0x41);
  if ((uVar3 >> 2 & 1) != 0) {
    local_60 = 0xff00;
    local_68 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0x100000000;
    uStack_38 = 0;
    (**(code **)(*param_1 + 0x68))(param_1,&local_68,1);
    (**(code **)(*(long *)param_1[0x3a] + 0x148))((long *)param_1[0x3a],&local_68,param_1 + 0xf,1);
    FUN__text__0046ab40(param_1[0x3a],plVar1,param_1 + 0x2c,param_1 + 0x31);
    uVar3 = *(ushort *)(param_1 + 0x41) & 0xfffb;
  }
  *(ushort *)(param_1 + 0x41) = uVar3 | 3;
  uVar2 = FUN__text__0047afb8(param_1);
  if ((((uVar2 & 1) != 0) && (param_1[0x44] == 0 && param_1[0xe] == 0)) && (DAT_00aeabf0 != param_1)
     ) {
    if (DAT_00aeabf0 == (long *)0x0) {
      DAT_00aeabf0 = param_1;
      param_1[0xe] = 0;
    }
    else {
      DAT_00aeabf0[0x44] = (long)param_1;
      param_1[0xe] = (long)DAT_00aeabf0;
      DAT_00aeabf0 = param_1;
    }
  }
  FUN__text__00478c48(param_1);
  return;
}


