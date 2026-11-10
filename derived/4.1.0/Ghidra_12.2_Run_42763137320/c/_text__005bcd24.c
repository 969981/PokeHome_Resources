/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bcd24; name: FUN_.text__005bcd24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bcd24(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN__text__005b8430(*(undefined8 *)
                       (*(long *)(param_1 + 0xb0) + (long)*(int *)(param_1 + 0xfc) * 8),
                      *(undefined8 *)(param_1 + 0x60));
  FUN__text__005a1bc8(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x60));
  FUN__text__005a1b30(*(undefined8 *)(param_1 + 0xe0),(long)*(int *)(param_1 + 0xfc),
                      *(undefined8 *)(param_1 + 0x60));
  FUN__text__005d7ac0(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0x60));
  piVar3 = _DAT_008a0300;
  FUN__text__006edf00(0x3f800000,
                      *(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*_DAT_008a0300 * 0x168);
  lVar5 = *(long *)(param_1 + 0xf0);
  if (lVar5 == 0) {
    FUN__text__006ec978(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*piVar3 * 0x168,
                        *(undefined4 *)(param_1 + 0xf8),
                        *(undefined4 *)
                         (*(long *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x98) + 0x58) + 0x6c),0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x100);
  uVar2 = *(undefined4 *)(param_1 + 0xf8);
  lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*piVar3 * 0x168;
  if (iVar1 == 0) {
    local_40 = 0;
    uStack_38 = 0;
    thunk_FUN__text__006ec64c(lVar5 + 0x58,&local_40);
    FUN__text__006eca30(lVar4,uVar2,1,&local_40,*(undefined4 *)(lVar5 + 0xc4),0);
    return;
  }
  local_40 = 0;
  uStack_38 = 0;
  thunk_FUN__text__006ec64c(lVar5 + 0x58,&local_40);
  FUN__text__006ecab0(lVar4,uVar2,1,&local_40,*(undefined4 *)(lVar5 + 0xc4),0,iVar1,0);
  return;
}


