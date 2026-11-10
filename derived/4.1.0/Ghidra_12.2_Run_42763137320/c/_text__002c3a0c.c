/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c3a0c; name: FUN_.text__002c3a0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c3a0c(long *param_1,char *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  long lVar8;
  char acStack_40 [16];
  long local_18;
  
  uVar5 = FUN__text__005dd600(param_3);
  snprintf(acStack_40,0x10,_DAT_0089f7a0,uVar5 & 0xffffffff);
  __n = strlen(acStack_40);
  iVar3 = strncmp(param_2,acStack_40,__n);
  if (iVar3 == 0) {
    FUN__text__00109fd4(param_1,param_2);
    lVar8 = *param_1;
    plVar1 = _DAT_0089f5c8;
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 0x58);
    }
    plVar2 = _DAT_0089f5d0;
    if (lVar8 != 0) {
      plVar2 = (long *)(lVar8 + 0x60);
    }
    lVar6 = *plVar2;
    if (lVar8 == 0) {
      param_1[1] = *plVar1;
      param_1[2] = lVar6;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    else {
      lVar7 = *(long *)(lVar8 + 0x68);
      param_1[1] = *plVar1;
      param_1[2] = lVar6;
      param_1[3] = lVar7;
      param_1[4] = 0;
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      lVar6 = param_1[4];
      param_1[4] = lVar8;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      }
    }
    *(undefined4 *)(param_1 + 5) = 4;
    FUN__text__0010d290(param_1);
    return;
  }
  uVar4 = FUN__text__005dd600(param_3);
  if (uVar4 == 0xffffffff) {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[1] = -0x340d631b7bddd9bb;
    param_1[2] = 0x70f683;
    param_1[3] = 0;
    return;
  }
  snprintf(acStack_40,0x10,_DAT_0089f7a0,(ulong)uVar4);
  FUN__text__002c3d5c(&local_18,acStack_40,param_2);
  FUN__text__005dd198(param_1,&local_18,4);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


