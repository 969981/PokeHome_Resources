/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f53e0; name: FUN_.text__004f53e0
 */


int FUN__text__004f53e0(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_170 [264];
  long local_68;
  long lStack_60;
  
  FUN__text__004f6114(auStack_170,param_1,1);
  while (local_68 != param_2) {
    (**(code **)(*param_1 + 0xb8))(param_1,auStack_170,1);
  }
  lVar3 = 0;
  uVar2 = *(undefined8 *)(param_1[0xc] + 8);
  do {
    lVar3 = param_1[0xd] + lVar3;
    param_1 = (long *)param_1[2];
  } while (param_1 != (long *)0x0);
  if (*(long *)(param_2 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN__text__004f6970(auStack_170,0);
    iVar1 = *(int *)(lStack_60 + 0x88) +
            (((int)uVar2 - ((int)lVar3 + iVar1)) - *(int *)(local_68 + 8));
  }
  FUN__text__004f6174(auStack_170);
  return iVar1;
}


