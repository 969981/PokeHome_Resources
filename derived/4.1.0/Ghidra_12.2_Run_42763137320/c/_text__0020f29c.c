/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020f29c; name: FUN_.text__0020f29c
 */


undefined8 FUN__text__0020f29c(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = *param_2;
  if (*(long *)(param_1 + 0x18) == lVar2) {
    iVar3 = 0;
    iVar1 = 0;
  }
  else if (*(long *)(param_1 + 0x248) == lVar2) {
    iVar3 = 0;
    iVar1 = 1;
  }
  else if (*(long *)(param_1 + 0x478) == lVar2) {
    iVar3 = 0;
    iVar1 = 2;
  }
  else if (*(long *)(param_1 + 0x6a8) == lVar2) {
    iVar3 = 0;
    iVar1 = 3;
  }
  else if (*(long *)(param_1 + 0x8d8) == lVar2) {
    iVar3 = 0;
    iVar1 = 4;
  }
  else if (*(long *)(param_1 + 0xb08) == lVar2) {
    iVar3 = 0;
    iVar1 = 5;
  }
  else if (*(long *)(param_1 + 0x88) == lVar2) {
    iVar1 = 0;
    iVar3 = 6;
  }
  else if (*(long *)(param_1 + 0x2b8) == lVar2) {
    iVar1 = 1;
    iVar3 = 6;
  }
  else if (*(long *)(param_1 + 0x4e8) == lVar2) {
    iVar1 = 2;
    iVar3 = 6;
  }
  else if (*(long *)(param_1 + 0x718) == lVar2) {
    iVar1 = 3;
    iVar3 = 6;
  }
  else if (*(long *)(param_1 + 0x948) == lVar2) {
    iVar1 = 4;
    iVar3 = 6;
  }
  else if (*(long *)(param_1 + 0xb78) == lVar2) {
    iVar1 = 5;
    iVar3 = 6;
  }
  else if (*(long *)(param_1 + 0xf8) == lVar2) {
    iVar1 = 0;
    iVar3 = 0xc;
  }
  else if (*(long *)(param_1 + 0x328) == lVar2) {
    iVar1 = 1;
    iVar3 = 0xc;
  }
  else if (*(long *)(param_1 + 0x558) == lVar2) {
    iVar1 = 2;
    iVar3 = 0xc;
  }
  else if (*(long *)(param_1 + 0x788) == lVar2) {
    iVar1 = 3;
    iVar3 = 0xc;
  }
  else if (*(long *)(param_1 + 0x9b8) == lVar2) {
    iVar1 = 4;
    iVar3 = 0xc;
  }
  else if (*(long *)(param_1 + 0xbe8) == lVar2) {
    iVar1 = 5;
    iVar3 = 0xc;
  }
  else if (*(long *)(param_1 + 0x168) == lVar2) {
    iVar1 = 0;
    iVar3 = 0x12;
  }
  else if (*(long *)(param_1 + 0x398) == lVar2) {
    iVar1 = 1;
    iVar3 = 0x12;
  }
  else if (*(long *)(param_1 + 0x5c8) == lVar2) {
    iVar1 = 2;
    iVar3 = 0x12;
  }
  else if (*(long *)(param_1 + 0x7f8) == lVar2) {
    iVar1 = 3;
    iVar3 = 0x12;
  }
  else if (*(long *)(param_1 + 0xa28) == lVar2) {
    iVar1 = 4;
    iVar3 = 0x12;
  }
  else if (*(long *)(param_1 + 0xc58) == lVar2) {
    iVar1 = 5;
    iVar3 = 0x12;
  }
  else {
    if (*(long *)(param_1 + 0x1d8) == lVar2) {
      iVar1 = 0;
    }
    else if (*(long *)(param_1 + 0x408) == lVar2) {
      iVar1 = 1;
    }
    else if (*(long *)(param_1 + 0x638) == lVar2) {
      iVar1 = 2;
    }
    else if (*(long *)(param_1 + 0x868) == lVar2) {
      iVar1 = 3;
    }
    else if (*(long *)(param_1 + 0xa98) == lVar2) {
      iVar1 = 4;
    }
    else {
      if (*(long *)(param_1 + 0xcc8) != lVar2) {
        return 0;
      }
      iVar1 = 5;
    }
    iVar3 = 0x18;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1 + iVar3;
  }
  return 1;
}


