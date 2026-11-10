/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fde20; name: FUN_.text__004fde20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004fde20(long *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  undefined4 local_34;
  uint *local_18;
  
  local_34 = param_3;
  local_18 = param_2;
  iVar2 = (**(code **)(*param_1 + 0x80))();
  if (iVar2 != 8) {
    lVar5 = param_1[4];
    uVar4 = *_DAT_008a4630;
    uVar3 = (**(code **)(*param_1 + 0x80))(param_1);
    FUN__text__004aab84(uVar4,(int)lVar5,8,uVar3);
    return 0x5b;
  }
  uVar4 = FUN__text__004f70e0(param_1,&local_18,&local_34,0);
  if ((int)uVar4 == 1) {
    if (*local_18 != 0) {
      lVar8 = (ulong)*local_18 * 0x20;
      local_18 = local_18 + 1;
      lVar5 = FUN__text__00400f80(0,lVar8);
      if (lVar5 == 0) {
        return 0x34;
      }
      lVar6 = 0;
      do {
        puVar1 = (uint *)(lVar5 + lVar6);
        lVar6 = lVar6 + 0x20;
        *puVar1 = *local_18;
        puVar1[1] = local_18[1];
        puVar1[2] = local_18[2];
        puVar1[3] = local_18[3];
        *(short *)(puVar1 + 4) = (short)local_18[4];
        *(undefined2 *)((long)puVar1 + 0x12) = *(undefined2 *)((long)local_18 + 0x12);
        *(short *)(puVar1 + 5) = (short)local_18[5];
        puVar1[6] = *(uint *)((long)local_18 + 0x16);
        *(undefined2 *)(puVar1 + 7) = *(undefined2 *)((long)local_18 + 0x1a);
        pcVar7 = (char *)((long)local_18 + 0x1d);
        *(bool *)((long)puVar1 + 0x1e) = (char)local_18[7] != '\0';
        local_18 = (uint *)((long)local_18 + 0x1e);
        *(bool *)((long)puVar1 + 0x1f) = *pcVar7 != '\0';
      } while (lVar8 != lVar6);
      FUN__text__004fe010(param_1,lVar5);
      FUN__text__00400fc0(0,lVar5);
    }
    uVar4 = 1;
  }
  return uVar4;
}


