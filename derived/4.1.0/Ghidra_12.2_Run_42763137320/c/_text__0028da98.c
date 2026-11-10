/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028da98; name: FUN_.text__0028da98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0028da98(long *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_18;
  
  lVar7 = *param_1;
  uVar1 = *param_2;
  uVar4 = (**(code **)(lVar7 + 0x890))(lVar7 + 0x8b0);
  if ((uVar4 & 1) == 0) {
    *(uint *)(lVar7 + 0x884) = uVar1;
    lVar5 = FUN__text__003c79c0(*(undefined8 *)(lVar7 + 0x2d0),0x730b28);
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
    lVar7 = FUN__text__003c79c0(*(undefined8 *)(lVar7 + 0x2d0),0x730b30);
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe;
    return;
  }
  *(uint *)(lVar7 + 0x87c) = uVar1;
  iVar3 = FUN__text__0015ab30();
  *(undefined4 *)(lVar7 + 0x880) =
       *(undefined4 *)(_DAT_008a1760 + (long)iVar3 * 0x2c + (ulong)uVar1 * 4);
  FUN__text__00286ad0(lVar7);
  FUN__text__00285880(lVar7);
  if (*(int *)(lVar7 + 0x878) != 0) {
    *(undefined4 *)(lVar7 + 0x878) = 0;
    FUN__text__002862c4(lVar7);
    iVar3 = *(int *)(lVar7 + 0x878);
    lVar5 = FUN__text__003c79c0(*(undefined8 *)(lVar7 + 0x2d0),0x7307d0);
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | iVar3 == 0;
    iVar3 = *(int *)(lVar7 + 0x878);
    lVar5 = FUN__text__003c79c0(*(undefined8 *)(lVar7 + 0x2d0),0x7307d8);
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | iVar3 == 1;
    *(undefined1 *)(lVar7 + 0x97a) = 0;
    bVar2 = *(int *)(lVar7 + 0x878) != 1;
    uVar6 = FUN__text__0012cb14(lVar7 + 0x110,0x7305f0);
    FUN__text__003a14e8(uVar6,bVar2);
    uVar6 = FUN__text__0012cb14(lVar7 + 0x110,0x7305f8);
    FUN__text__003a14e8(uVar6,bVar2);
    FUN__text__00286570(lVar7);
  }
  local_18 = 0x431e769ffc1ad350;
  uVar6 = FUN__text__0012ce7c(lVar7 + 0x110,&local_18);
  FUN__text__003a14e8(uVar6,1);
  FUN__text__00128ec0(lVar7,0);
  if (*(long *)(lVar7 + 0x4e0) != 0) {
    FUN__text__003c02e4();
  }
  return;
}


