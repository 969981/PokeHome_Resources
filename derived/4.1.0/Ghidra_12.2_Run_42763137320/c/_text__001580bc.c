/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001580bc; name: FUN_.text__001580bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001580bc(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char *__s2;
  int iVar3;
  size_t __n;
  long lVar4;
  long lVar5;
  long lVar6;
  char *__s1;
  long local_38;
  
  __s2 = _DAT_0089f5c0;
  __s1 = *(char **)(param_2 + 8);
  __n = strlen(_DAT_0089f5c0);
  iVar3 = strncmp(__s1,__s2,__n);
  if (iVar3 != 0) {
    FUN__text__00158c24(&local_38,_DAT_0089f5c0,param_2);
    FUN__text__005dd198(param_1,&local_38,0);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    return;
  }
  FUN__text__00109fd4(param_1,__s1);
  lVar6 = *param_1;
  plVar1 = _DAT_0089f5c8;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x58);
  }
  plVar2 = _DAT_0089f5d0;
  if (lVar6 != 0) {
    plVar2 = (long *)(lVar6 + 0x60);
  }
  lVar4 = *plVar2;
  if (lVar6 == 0) {
    param_1[1] = *plVar1;
    param_1[2] = lVar4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x68);
    param_1[1] = *plVar1;
    param_1[2] = lVar4;
    param_1[3] = lVar5;
    param_1[4] = 0;
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    lVar4 = param_1[4];
    param_1[4] = lVar6;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  FUN__text__0010d290(param_1);
  return;
}


