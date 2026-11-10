/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002278a4; name: FUN_.text__002278a4
 */


void FUN__text__002278a4(long *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_48;
  
  iVar2 = *param_2;
  lVar1 = *param_1 + 0x110;
  lVar4 = FUN__text__0012cb14(lVar1,0x7294f0);
  lVar5 = FUN__text__0012cb14(lVar1,0x729520);
  bVar3 = iVar2 == 5;
  uVar7 = (ulong)bVar3;
  *(bool *)(lVar4 + 0x110) = bVar3;
  *(ulong *)(lVar4 + 0x108) = uVar7 << 0x1c;
  FUN__text__003a14e8(lVar4,bVar3);
  *(ulong *)(lVar5 + 0x108) = uVar7 << 0x1e;
  *(bool *)(lVar5 + 0x110) = bVar3;
  FUN__text__003a14e8(lVar5,uVar7);
  lVar4 = FUN__text__0012cb14(lVar1,0x7294f8);
  lVar5 = FUN__text__0012cb14(lVar1,0x729528);
  bVar3 = iVar2 == 4;
  uVar7 = (ulong)bVar3;
  *(bool *)(lVar4 + 0x110) = bVar3;
  *(ulong *)(lVar4 + 0x108) = uVar7 << 0x1c;
  FUN__text__003a14e8(lVar4,bVar3);
  *(ulong *)(lVar5 + 0x108) = uVar7 << 0x1e;
  *(bool *)(lVar5 + 0x110) = bVar3;
  FUN__text__003a14e8(lVar5,uVar7);
  lVar4 = FUN__text__0012cb14(lVar1,0x729500);
  lVar5 = FUN__text__0012cb14(lVar1,0x729530);
  bVar3 = iVar2 == 3;
  uVar7 = (ulong)bVar3;
  *(bool *)(lVar4 + 0x110) = bVar3;
  *(ulong *)(lVar4 + 0x108) = uVar7 << 0x1c;
  FUN__text__003a14e8(lVar4,bVar3);
  *(ulong *)(lVar5 + 0x108) = uVar7 << 0x1e;
  *(bool *)(lVar5 + 0x110) = bVar3;
  FUN__text__003a14e8(lVar5,uVar7);
  lVar4 = FUN__text__0012cb14(lVar1,0x729508);
  lVar5 = FUN__text__0012cb14(lVar1,0x729538);
  bVar3 = iVar2 == 2;
  uVar7 = (ulong)bVar3;
  *(bool *)(lVar4 + 0x110) = bVar3;
  *(ulong *)(lVar4 + 0x108) = uVar7 << 0x1c;
  FUN__text__003a14e8(lVar4,bVar3);
  *(ulong *)(lVar5 + 0x108) = uVar7 << 0x1e;
  *(bool *)(lVar5 + 0x110) = bVar3;
  FUN__text__003a14e8(lVar5,uVar7);
  lVar4 = FUN__text__0012cb14(lVar1,0x729510);
  lVar5 = FUN__text__0012cb14(lVar1,0x729540);
  bVar3 = iVar2 == 1;
  uVar7 = (ulong)bVar3;
  *(bool *)(lVar4 + 0x110) = bVar3;
  *(ulong *)(lVar4 + 0x108) = uVar7 << 0x1c;
  FUN__text__003a14e8(lVar4,bVar3);
  *(ulong *)(lVar5 + 0x108) = uVar7 << 0x1e;
  *(bool *)(lVar5 + 0x110) = bVar3;
  FUN__text__003a14e8(lVar5,uVar7);
  lVar4 = FUN__text__0012cb14(lVar1,0x729518);
  lVar5 = FUN__text__0012cb14(lVar1,0x729548);
  bVar3 = iVar2 == 0;
  uVar7 = (ulong)bVar3;
  *(bool *)(lVar4 + 0x110) = bVar3;
  *(ulong *)(lVar4 + 0x108) = uVar7 << 0x1c;
  FUN__text__003a14e8(lVar4,bVar3);
  *(ulong *)(lVar5 + 0x108) = uVar7 << 0x1e;
  *(bool *)(lVar5 + 0x110) = bVar3;
  FUN__text__003a14e8(lVar5,uVar7);
  local_48 = 0x431e769ffc1ad350;
  uVar6 = FUN__text__0012ce7c(lVar1,&local_48);
  FUN__text__003a14e8(uVar6,iVar2 == 6);
  return;
}


