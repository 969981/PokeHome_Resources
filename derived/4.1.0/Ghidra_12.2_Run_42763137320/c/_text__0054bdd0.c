/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054bdd0; name: FUN_.text__0054bdd0
 */


undefined8
FUN__text__0054bdd0(long *param_1,long *param_2,long *param_3,ulong param_4,undefined4 param_5,
                   long param_6)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 auStack_260 [128];
  
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *param_1 = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((param_4 & 0xff) != 0) {
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,(param_4 & 0xff) << 5,0x7147ff,0x43);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      return 0x34;
    }
    *(uint *)(param_1 + 1) = (uint)param_4 & 0xff;
    lVar3 = (long)auStack_260 + (0x200 - ((ulong)((int)(param_4 & 0xff) * 4 + 0xf) & 0x7f0));
    FUN__text__0054db20(param_3,param_4 & 0xffffffff,param_6 + 0x10,lVar3);
    if ((int)param_1[1] != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        lVar4 = 0;
        if (*param_1 != 0) {
          puVar1 = (undefined8 *)(*param_1 + lVar5);
          puVar1[2] = 0;
          puVar1[3] = 0;
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar4 = *param_1;
        }
        uVar7 = *(undefined4 *)(lVar3 + uVar6 * 4);
        iVar2 = (**(code **)(*param_3 + 0xe0))(param_3);
        FUN__text__0054d0e8(uVar7,lVar4 + lVar5,param_5,param_6,(long)iVar2);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar6 < *(uint *)(param_1 + 1));
    }
  }
  return 1;
}


