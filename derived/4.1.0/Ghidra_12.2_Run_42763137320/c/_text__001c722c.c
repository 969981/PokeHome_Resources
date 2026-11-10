/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c722c; name: FUN_.text__001c722c
 */


void FUN__text__001c722c(long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 local_68;
  
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  FUN__text__0012c898(lVar1,param_1 + 0x118);
  FUN__text__0012c898(lVar1);
  FUN__text__0012c898(lVar1,(undefined8 *)(param_1 + 0x128));
  FUN__text__0012c898(lVar1,(undefined8 *)(param_1 + 0x138));
  FUN__text__0012c898(lVar1,(undefined8 *)(param_1 + 0x140));
  FUN__text__0012c898(lVar1,(undefined8 *)(param_1 + 0x148));
  FUN__text__0012c898(lVar1,(undefined8 *)(param_1 + 0x158));
  FUN__text__0012c898(lVar1,(undefined8 *)(param_1 + 0x160));
  FUN__text__0012c898(lVar1,(undefined8 *)(param_1 + 0x168));
  local_68 = *(undefined8 *)(param_1 + 0x118);
  if (param_3 == 2) {
    if (param_2 == 2) {
      local_68 = *(undefined8 *)(param_1 + 0x158);
    }
    else if (param_2 == 1) {
      local_68 = *(undefined8 *)(param_1 + 0x168);
    }
    else if (param_2 == 0) {
      local_68 = *(undefined8 *)(param_1 + 0x160);
    }
  }
  else if (param_3 == 1) {
    if (param_2 == 2) {
      local_68 = *(undefined8 *)(param_1 + 0x140);
    }
    else if (param_2 == 1) {
      local_68 = *(undefined8 *)(param_1 + 0x138);
    }
    else if (param_2 == 0) {
      local_68 = *(undefined8 *)(param_1 + 0x148);
    }
  }
  else if (param_3 == 0) {
    if (param_2 == 2) {
      local_68 = *(undefined8 *)(param_1 + 0x128);
    }
    else if (param_2 == 1) {
      local_68 = *(undefined8 *)(param_1 + 0x120);
    }
  }
  FUN__text__0012c378(*(long *)(param_1 + 8) + 0x110,&local_68);
  return;
}


