/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b7b70; name: FUN_.text__002b7b70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002b7b70(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 local_38;
  ulong local_18;
  
  local_18 = local_18 & 0xffffffff00000000;
  lVar2 = FUN__text__002b145c(*_DAT_0089f510,&local_18);
  local_18 = param_1 + 0x108;
  local_38 = 4;
  cVar1 = FUN__text__002b8bc0(lVar2,0x73343c,&local_18,&local_38);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x73343c);
  }
  local_18 = param_1 + 0x10c;
  local_38 = 4;
  cVar1 = FUN__text__002b8da0(lVar2,0x733440,&local_18,&local_38);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x733440);
  }
  local_18 = param_1 + 0x110;
  local_38 = 0x38;
  cVar1 = FUN__text__002b8f80(lVar2,0x733444,&local_18,&local_38);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x733444);
  }
  uVar4 = FUN__text__002ae450(lVar2,0x733448);
  if (((uVar4 & 0xff) == 0) && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x733448);
  }
  *(int *)(param_1 + 0x148) = (int)(uVar4 >> 0x20);
  local_18 = param_1 + 0x150;
  local_38 = 8;
  cVar1 = FUN__text__002b9160(lVar2,0x73344c,&local_18,&local_38);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x73344c);
  }
  local_18 = param_1 + 0x158;
  local_38 = 8;
  cVar1 = FUN__text__002b9160(lVar2,0x733450,&local_18,&local_38);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x733450);
  }
  uVar4 = FUN__text__002ae450(lVar2,0x733454);
  if (((uVar4 & 0xff) == 0) && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x733454);
  }
  *(int *)(param_1 + 0x160) = (int)(uVar4 >> 0x20);
  local_18 = param_1 + 0x168;
  local_38 = 0xd0;
  cVar1 = FUN__text__002b9340(lVar2,0x733458,&local_18,&local_38);
  if ((cVar1 == '\0') && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,0x733458);
    return;
  }
  return;
}


