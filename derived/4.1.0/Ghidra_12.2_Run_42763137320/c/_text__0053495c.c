/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053495c; name: FUN_.text__0053495c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0053495c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_70 [48];
  
  lVar2 = FUN__text__0050c2e0(param_2,*(undefined8 *)(param_1 + 0x30));
  lVar3 = FUN__text__0050c2e0(param_2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = FUN__text__0050c2a0(param_2,*(undefined8 *)(param_1 + 0x40));
  if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) {
    plVar5 = *(long **)(param_1 + 0x48);
    *(undefined4 *)(plVar5 + 5) = 0;
    plVar5[4] = 0;
    (**(code **)(*plVar5 + 0x10))();
    FUN__text__00533c90(lVar2,lVar3,lVar4,*(undefined8 *)(param_1 + 0x48));
    lVar1 = _DAT_008a40c0;
    FUN__text__00536c78(*(undefined4 *)(_DAT_008a40c0 + 0x18),0x42c80000,auStack_70,*_DAT_008a40c8,
                        *(undefined4 *)(_DAT_008a40c0 + 0xc),*(undefined4 *)(_DAT_008a40c0 + 0x10));
    FUN__text__0053a4dc(auStack_70,*(undefined4 *)(lVar1 + 0x14));
    FUN__text__0053a4e4(auStack_70,*(undefined1 *)(lVar1 + 0x24));
    FUN__text__0053a26c(auStack_70,lVar2,lVar3,lVar4,*(undefined8 *)(param_1 + 0x48));
    FUN__text__00536cac(auStack_70);
    FUN__text__0052c540(*(undefined8 *)(param_1 + 0x48),lVar2,lVar3);
  }
  return;
}


