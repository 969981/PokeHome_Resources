/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e8f94; name: FUN_.text__004e8f94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004e8f94(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 local_24;
  
  lVar4 = FUN__text__00400f80(0,0x88);
  if (lVar4 != 0) {
    FUN__text__004ea2b8(lVar4,param_1,param_2,param_3,param_4 & 1);
    plVar5 = (long *)(**(code **)(*param_1 + 0xd0))(param_1);
    if (plVar5 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x128))(plVar5,1);
      if ((uVar6 & 1) != 0) {
        FUN__text__00464fac(plVar5);
        if (DAT_00aeb9e8 == (long *)0x0) {
          DAT_00aeb9e0 = param_1;
        }
        plVar5 = param_1;
        param_1[0xe] = (long)DAT_00aeb9e8;
        DAT_00aeb9e8 = plVar5;
        FUN__text__004f5ec4(param_1,lVar4);
        puVar1 = _DAT_008a45d8;
        if (*(int *)(param_2 + 0x14) == 0) {
          return 2;
        }
        local_24 = 0;
        uVar2 = FUN__text__0048de00(*_DAT_008a45d8,*(int *)(param_2 + 0x14),param_1 + 3,param_3,
                                    &local_24);
        FUN__text__004f60a8(param_1,local_24);
        if (((local_24._2_1_ >> 5 & 1) != 0) &&
           (iVar3 = FUN__text__004f6a60(_DAT_008a5080,*(undefined4 *)(param_2 + 0x14)), iVar3 != 1))
        {
          FUN__text__004f60a8(param_1,local_24 & 0xffdfffff);
        }
        FUN__text__0048d4d0(*puVar1,*(undefined4 *)(param_2 + 0x14));
        return uVar2;
      }
      (**(code **)(*plVar5 + 0x130))(plVar5,1);
      FUN__text__00464fec(plVar5);
    }
    FUN__text__004ea390(lVar4);
    FUN__text__00400fc0(0,lVar4);
  }
  return 2;
}


