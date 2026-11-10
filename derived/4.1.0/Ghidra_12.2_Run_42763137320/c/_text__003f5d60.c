/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f5d60; name: FUN_.text__003f5d60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003f5d60(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auStack_150 [280];
  char local_38 [4];
  int local_34;
  
  puVar2 = _DAT_008a43e0;
  local_38[0] = '\x01';
  puVar1 = (undefined8 *)0x0;
  if ((*(byte *)((long)param_1 + 0x34) & 2) != 0) {
    puVar1 = param_1 + 1;
  }
  plVar3 = (long *)*_DAT_008a43e0;
  if ((*(byte *)((long)param_1 + 0x34) & 1) == 0) {
    local_34 = (**(code **)(*plVar3 + 0x18))
                         (plVar3,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 6),puVar1,local_38
                          ,param_2);
  }
  else {
    local_34 = (**(code **)(*plVar3 + 0x10))
                         (plVar3,*param_1,*(undefined4 *)(param_1 + 6),puVar1,local_38,param_2);
  }
  if (((local_34 == 1) && (*(int *)(param_1 + 6) != 0 || 0 < *param_2)) && (local_38[0] != '\0')) {
    return 1;
  }
  memset(auStack_150,0,0x104);
  plVar3 = (long *)*puVar2;
  if ((*(byte *)((long)param_1 + 0x34) & 1) == 0) {
    (**(code **)(*plVar3 + 0x28))
              (plVar3,&local_34,*(undefined4 *)param_1,puVar1,*(undefined4 *)(param_1 + 6),
               auStack_150,0x104);
    return 2;
  }
  (**(code **)(*plVar3 + 0x20))
            (plVar3,&local_34,*param_1,puVar1,*(undefined4 *)(param_1 + 6),auStack_150,0x104);
  return 2;
}


