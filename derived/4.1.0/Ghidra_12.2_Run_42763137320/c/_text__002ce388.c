/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ce388; name: FUN_.text__002ce388
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ce388(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  char *__s2;
  int iVar4;
  size_t __n;
  long lVar5;
  long lVar6;
  long lVar7;
  char *__s1;
  long local_28;
  
  __s2 = _DAT_0089f5c0;
  puVar1 = (undefined8 *)&DAT_008aa0f8;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x60);
  }
  __s1 = (char *)*puVar1;
  __n = strlen(_DAT_0089f5c0);
  iVar4 = strncmp(__s1,__s2,__n);
  if (iVar4 != 0) {
    FUN__text__002ce6b8(&local_28,_DAT_0089f5c0,param_2);
    FUN__text__005dd198(param_1,&local_28,0);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    return;
  }
  FUN__text__00109fd4(param_1,__s1);
  lVar7 = *param_1;
  plVar2 = _DAT_0089f5c8;
  if (lVar7 != 0) {
    plVar2 = (long *)(lVar7 + 0x58);
  }
  plVar3 = (long *)&DAT_008aa0f8;
  if (lVar7 != 0) {
    plVar3 = (long *)(lVar7 + 0x60);
  }
  lVar5 = *plVar3;
  if (lVar7 == 0) {
    param_1[1] = *plVar2;
    param_1[2] = lVar5;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    lVar6 = *(long *)(lVar7 + 0x68);
    param_1[1] = *plVar2;
    param_1[2] = lVar5;
    param_1[3] = lVar6;
    param_1[4] = 0;
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar5 = param_1[4];
    param_1[4] = lVar7;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  FUN__text__0010d290(param_1);
  return;
}


