/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006728cc; name: FUN_.text__006728cc
 */


undefined8 FUN__text__006728cc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *local_68;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  do {
    pcVar8 = (char *)*param_3;
    if (*pcVar8 == ':') {
LAB__text__0067298c:
      pcVar4 = pcVar8 + 1;
      if (*pcVar4 != ':') {
        pcVar8 = strchr(pcVar4,0x3a);
        if (pcVar8 != (char *)0x0) {
          local_68 = (char *)0x0;
          lVar7 = strtol(pcVar4,&local_68,10);
          if ((local_68 == pcVar8) && (lVar7 == *(int *)(param_2 + 0x198))) {
            pcVar8 = pcVar8 + 1;
            goto LAB__text__006729a0;
          }
        }
        goto LAB__text__00672ad8;
      }
      pcVar8 = pcVar8 + 2;
LAB__text__006729a0:
      if (*pcVar8 == '\0') goto LAB__text__00672ad8;
      pcVar8 = (char *)FUN__text__00678404();
      if (pcVar8 == (char *)0x0) {
        return 0x1b;
      }
      if (*pcVar8 == '[') {
        FUN__text__0066713c(param_1,0x71a5c7);
        uVar9 = 4;
        goto LAB__text__00672b68;
      }
      pcVar4 = strchr(pcVar8,0x3a);
      if (pcVar4 == (char *)0x0) {
LAB__text__00672a60:
        uVar6 = 0xffffffff;
      }
      else {
        *pcVar4 = '\0';
        local_68 = (char *)0x0;
        pcVar4 = pcVar4 + 1;
        if (*pcVar4 == '\0') goto LAB__text__00672a60;
        uVar6 = strtol(pcVar4,&local_68,10);
        if (local_68 == (char *)0x0) {
          if (uVar6 >> 0x10 != 0) goto LAB__text__00672ab8;
        }
        else if (((*local_68 != '\0') || ((long)uVar6 < 0)) || (0xffff < (long)uVar6)) {
LAB__text__00672ab8:
          FUN__text__00666f74(param_1,0x71d475,pcVar4);
          FUN__text__006783e4(pcVar8);
          goto LAB__text__00672ad8;
        }
      }
      iVar3 = (int)uVar6;
      pcVar4 = (char *)FUN__text__00678404(pcVar8);
      if (pcVar4 == (char *)0x0) {
        uVar9 = 0x1b;
LAB__text__00672b68:
        FUN__text__006783e4(pcVar8);
        return uVar9;
      }
      FUN__text__006783e4(pcVar8);
      if (*pcVar4 == '\0') goto LAB__text__00672adc;
      *(char **)(param_2 + 0xf0) = pcVar4;
      *(char **)(param_2 + 0x100) = pcVar4;
      *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) | 4;
      FUN__text__00666f74(param_1,0x716f5d,pcVar4);
    }
    else {
      bVar2 = (*(uint *)(param_2 + 0x3fc) & 0x200) != 0;
      uVar9 = 0x70f683;
      if (bVar2) {
        uVar9 = 0x711fca;
      }
      uVar1 = 0x70f683;
      if (bVar2) {
        uVar1 = 0x71813d;
      }
      pcVar4 = (char *)FUN__text__00659a28(0x71c4e8,uVar9,*(undefined8 *)(param_2 + 0xd0),uVar1);
      if (pcVar4 == (char *)0x0) {
        return 0x1b;
      }
      sVar5 = strlen(pcVar4);
      iVar3 = FUN__text__0066c2d8(pcVar8,pcVar4,sVar5);
      FUN__text__006783e4(pcVar4);
      if ((iVar3 != 0) && (pcVar8 = pcVar8 + sVar5, *pcVar8 == ':')) goto LAB__text__0067298c;
LAB__text__00672ad8:
      pcVar4 = (char *)0x0;
      iVar3 = -1;
LAB__text__00672adc:
      *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) & 0xfffffffb;
      FUN__text__006783e4(pcVar4);
      pcVar4 = (char *)0x0;
    }
    if (-1 < iVar3) {
      *(int *)(param_2 + 0x19c) = iVar3;
      *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) | 8;
      FUN__text__00666f74(param_1,0x7177ee,iVar3);
      return 0;
    }
    *(uint *)(param_2 + 0x3fc) = *(uint *)(param_2 + 0x3fc) & 0xfffffff7;
    if (pcVar4 != (char *)0x0) {
      return 0;
    }
    param_3 = (undefined8 *)param_3[1];
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
  } while( true );
}


