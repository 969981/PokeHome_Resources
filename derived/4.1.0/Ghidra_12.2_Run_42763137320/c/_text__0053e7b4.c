/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053e7b4; name: FUN_.text__0053e7b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__0053e7b4(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  undefined4 local_24;
  
  lVar3 = *param_1;
  *(long *)(lVar3 + 0x158) = param_2;
  FUN__text__0053e8c4(lVar3,param_2 + 0x10);
  local_28 = 0.0;
  lVar3 = *param_1;
  local_38 = 0;
  local_30 = 0;
  lVar4 = *(long *)(param_2 + 8);
  local_48 = 0;
  local_40 = 0;
  if ((*_DAT_008a3fc0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(_DAT_008a3fc0);
    puVar1 = _DAT_008a3fc8;
    if (iVar2 != 0) {
      auVar5 = NEON_fmov(0x3f800000,4);
      _DAT_008a3fc8[1] = auVar5._8_8_;
      *puVar1 = auVar5._0_8_;
      __cxa_guard_release(_DAT_008a3fc0);
    }
  }
  local_38 = *(undefined8 *)(lVar3 + 0x114);
  local_40 = CONCAT44(*(float *)(lVar3 + 0x110),*(undefined4 *)(lVar3 + 0x108));
  local_48 = *(undefined8 *)(lVar3 + 0x100);
  local_24 = 0x3f800000;
  local_30 = CONCAT44(1.0 / *(float *)(lVar3 + 0x114),1.0 / *(float *)(lVar3 + 0x110));
  local_28 = 1.0 / *(float *)(lVar3 + 0x118);
  FUN__text__0053e9f0(lVar4 + 0x30,*(undefined8 *)(lVar4 + 0x38),&local_48,lVar3,&local_24);
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x160) != 0) {
    FUN__text__0053edf8(lVar3);
    *(undefined4 *)(lVar3 + 0x160) = 0;
  }
  return *(char *)(lVar3 + 0x169) == '\0';
}


