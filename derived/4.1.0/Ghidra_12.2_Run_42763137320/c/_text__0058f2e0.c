/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058f2e0; name: FUN_.text__0058f2e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0058f2e0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auStack_d0 [128];
  
  lVar1 = _DAT_008a4900;
  uVar3 = (ulong)((*(uint *)(*(long *)(param_1 + 0x28) + 4) & 0x7ffffffe) * 2 *
                  *(int *)(param_1 + 0x20) + 0xf & 0xfffffff0);
  if (uVar3 < *(ulong *)(_DAT_008a4900 + 8) >> 2) {
    puVar2 = auStack_d0 + (0x80 - (uVar3 + 0xf & 0x1fffffff0));
  }
  else {
    puVar2 = (undefined1 *)FUN__text__00400f90(5,uVar3,0x10);
    if (puVar2 == (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 4) = 2;
      return;
    }
  }
  FUN__text__0058f030(param_1,param_2,param_3,param_4,param_5,puVar2);
  if (*(ulong *)(lVar1 + 8) >> 2 <= uVar3) {
    FUN__text__00400fc0(5,puVar2);
  }
  return;
}


