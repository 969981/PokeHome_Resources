/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028a010; name: FUN_.text__0028a010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0028a010(long param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 local_38;
  
  FUN__text__003d17a0(param_1 + 0x990);
  FUN__text__003d17a0(param_1 + 0xff0);
  if (*(char *)(param_1 + 0x1650) != '\0') {
    psVar6 = (short *)FUN__text__0027a640(*(undefined8 *)(param_1 + 0x640),
                                          *(undefined4 *)(param_1 + 0x970),
                                          *(undefined4 *)(param_1 + 0x974),
                                          *(undefined1 *)(param_1 + 0x978),
                                          *(undefined1 *)(param_1 + 0x979));
    sVar2 = *psVar6;
    cVar1 = *(char *)((long)psVar6 + 5);
    uVar10 = (uint)*(byte *)(psVar6 + 1);
    if (sVar2 == 0x365) {
      uVar11 = uVar10 * 0x25 >> 8;
      uVar11 = uVar11 + ((uVar10 - uVar11 & 0xfe) >> 1) >> 2;
    }
    else {
      uVar8 = FUN__text__0016b970(sVar2);
      uVar11 = 0;
      if ((uVar8 & 1) == 0) {
        uVar11 = uVar10;
      }
    }
    iVar5 = *(int *)(param_1 + 0x970);
    iVar4 = FUN__text__0028f1c0(param_1,sVar2);
    lVar7 = *(long *)(param_1 + 0x640);
    if (*(int *)(lVar7 + 0x130) == 1) {
      uVar8 = FUN__text__0028f1a4(param_1,*(undefined1 *)(lVar7 + 0x92954),
                                  *(undefined4 *)(lVar7 + 0x92958),
                                  *(undefined1 *)(lVar7 + iVar5 + 0x92968),sVar2);
      lVar7 = *(long *)(param_1 + 0x640);
      iVar4 = 2;
      if ((uVar8 & 1) == 0) {
        iVar4 = 0;
      }
    }
    iVar5 = FUN__text__0027a5c0(lVar7,*(undefined4 *)(param_1 + 0x970));
    if ((iVar4 == 2) && (0 < iVar5)) {
      FUN__text__00205bf0(sVar2,uVar11,0,(ulong)(cVar1 != '\0') << 1);
    }
    *(char *)(param_1 + 0x1650) = '\0';
  }
  if ((-1 < *(int *)(param_1 + 0x884)) &&
     (uVar8 = (**(code **)(param_1 + 0x890))(param_1 + 0x8b0), (uVar8 & 1) != 0)) {
    uVar10 = *(uint *)(param_1 + 0x884);
    *(uint *)(param_1 + 0x87c) = uVar10;
    iVar4 = FUN__text__0015ab30();
    *(undefined4 *)(param_1 + 0x880) =
         *(undefined4 *)(_DAT_008a1760 + (long)iVar4 * 0x2c + (ulong)uVar10 * 4);
    FUN__text__00286ad0(param_1);
    FUN__text__00285880(param_1);
    if (*(int *)(param_1 + 0x878) != 0) {
      *(undefined4 *)(param_1 + 0x878) = 0;
      FUN__text__002862c4(param_1);
      iVar4 = *(int *)(param_1 + 0x878);
      lVar7 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7307d0);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | iVar4 == 0;
      iVar4 = *(int *)(param_1 + 0x878);
      lVar7 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7307d8);
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | iVar4 == 1;
      *(undefined1 *)(param_1 + 0x97a) = 0;
      bVar3 = *(int *)(param_1 + 0x878) != 1;
      uVar9 = FUN__text__0012cb14(param_1 + 0x110,0x7305f0);
      FUN__text__003a14e8(uVar9,bVar3);
      uVar9 = FUN__text__0012cb14(param_1 + 0x110,0x7305f8);
      FUN__text__003a14e8(uVar9,bVar3);
      FUN__text__00286570(param_1);
    }
    local_38 = 0x431e769ffc1ad350;
    uVar9 = FUN__text__0012ce7c(param_1 + 0x110,&local_38);
    FUN__text__003a14e8(uVar9,1);
    FUN__text__00128ec0(param_1,0);
    if (*(long *)(param_1 + 0x4e0) != 0) {
      FUN__text__003c02e4();
    }
    *(undefined4 *)(param_1 + 0x884) = 0xffffffff;
  }
  return 0;
}


