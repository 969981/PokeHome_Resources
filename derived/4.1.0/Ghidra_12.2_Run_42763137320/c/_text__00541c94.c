/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00541c94; name: FUN_.text__00541c94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00541c94(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  
  lVar3 = *param_1;
  *(long *)(lVar3 + 0x168) = param_2;
  FUN__text__00541d9c(lVar3,param_2 + 0x10);
  local_28 = 0.0;
  lVar3 = *param_1;
  local_38 = 0;
  local_30 = 0;
  lVar5 = *(long *)(param_2 + 8);
  local_48 = 0;
  local_40 = 0;
  if ((*_DAT_008a3fc0 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(_DAT_008a3fc0);
    puVar1 = _DAT_008a3fc8;
    if (iVar2 != 0) {
      auVar6 = NEON_fmov(0x3f800000,4);
      _DAT_008a3fc8[1] = auVar6._8_8_;
      *puVar1 = auVar6._0_8_;
      __cxa_guard_release(_DAT_008a3fc0);
    }
  }
  local_38 = *(undefined8 *)(lVar3 + 0x114);
  local_40 = CONCAT44(*(float *)(lVar3 + 0x110),*(undefined4 *)(lVar3 + 0x108));
  local_48 = *(undefined8 *)(lVar3 + 0x100);
  lVar4 = *(long *)(lVar5 + 0x38);
  local_30 = CONCAT44(1.0 / *(float *)(lVar3 + 0x114),1.0 / *(float *)(lVar3 + 0x110));
  local_28 = 1.0 / *(float *)(lVar3 + 0x118);
  if (lVar4 != 0) {
    FUN__text__00541ec0(lVar5 + 0x30,lVar4,&local_48);
  }
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x170) != 0) {
    FUN__text__00542248(lVar3);
    *(undefined4 *)(lVar3 + 0x170) = 0;
  }
  return *(char *)(lVar3 + 0x179) == '\0';
}


