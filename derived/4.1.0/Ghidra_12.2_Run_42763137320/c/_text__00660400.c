/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00660400; name: FUN_.text__00660400
 */


int FUN__text__00660400(long *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *__s;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_78 [3];
  
  lVar9 = *param_1;
  local_78[2] = param_3;
  local_78[1] = 0;
  if ((param_2 & 1) == 0) {
    local_78[0] = *(long *)(lVar9 + 0x808);
    if (((*(uint *)((long)param_1 + 0x3fc) & 0x4020) == 0x20) &&
       ((*(byte *)(lVar9 + 0xf40) >> 4 & 1) != 0)) {
      local_78[1] = *(undefined8 *)(lVar9 + 0x810);
      lVar4 = 2;
      goto LAB__text__00660484;
    }
  }
  else {
    if ((*(byte *)(lVar9 + 0xf40) >> 4 & 1) == 0) {
      local_78[0] = *(long *)(lVar9 + 0x808);
    }
    else {
      local_78[0] = *(long *)(lVar9 + 0x810);
    }
  }
  lVar4 = 1;
LAB__text__00660484:
  lVar5 = 0;
  do {
    for (plVar8 = (long *)local_78[lVar5]; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
      __s = (char *)*plVar8;
      pcVar2 = strchr(__s,0x3a);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = strchr(__s,0x3b);
        if (pcVar2 != (char *)0x0) {
          lVar7 = 0;
          do {
            lVar6 = lVar7;
            if (pcVar2[lVar6 + 1] == '\0') goto LAB__text__00660624;
            iVar1 = FUN__text__0065680c();
            lVar7 = lVar6 + 1;
          } while (iVar1 != 0);
          if (pcVar2[lVar6 + 1] == '\0') {
LAB__text__00660624:
            if (pcVar2[lVar6] != ';') goto LAB__text__006604b8;
            lVar7 = FUN__text__00678404(*plVar8);
            if (lVar7 == 0) {
              FUN__text__0065fd64(local_78 + 2);
              return 0x1b;
            }
            pcVar2[lVar6 + (lVar7 - *plVar8)] = ':';
            pcVar2 = pcVar2 + (lVar7 - *plVar8) + lVar6;
            goto LAB__text__006604c0;
          }
        }
      }
      else {
LAB__text__006604b8:
        lVar7 = 0;
LAB__text__006604c0:
        do {
          pcVar2 = pcVar2 + 1;
          if (*pcVar2 == '\0') {
            cVar3 = '\0';
            goto joined_r0x006604e4;
          }
          iVar1 = FUN__text__0065680c();
        } while (iVar1 != 0);
        cVar3 = *pcVar2;
joined_r0x006604e4:
        if ((lVar7 != 0) || (cVar3 != '\0')) {
          lVar6 = lVar7;
          if (lVar7 == 0) {
            lVar6 = *plVar8;
          }
          if ((param_1[0x91] == 0) ||
             (iVar1 = thunk_FUN__text__0066c2d8(0x716288,lVar6,5), iVar1 == 0)) {
            iVar1 = *(int *)(lVar9 + 0xa38);
            if (iVar1 == 3) {
              iVar1 = thunk_FUN__text__0066c2d8(0x71df49,lVar6,0xd);
              if (iVar1 != 0) goto LAB__text__006605c4;
              iVar1 = *(int *)(lVar9 + 0xa38);
            }
            if (((((iVar1 == 4) &&
                  (iVar1 = thunk_FUN__text__0066c2d8(0x71df49,lVar6,0xd), iVar1 != 0)) ||
                 ((*(char *)((long)param_1 + 0x3fd) < '\0' &&
                  (iVar1 = thunk_FUN__text__0066c2d8(0x70b205,lVar6,0xf), iVar1 != 0)))) ||
                (((param_1[0x94] != 0 &&
                  (iVar1 = thunk_FUN__text__0066c2d8(0x7149a9,lVar6,0xb), iVar1 != 0)) ||
                 (((int)param_1[0x46] == 0x14 &&
                  (iVar1 = thunk_FUN__text__0066c2d8(0x70e8f1,lVar6,0x12), iVar1 != 0)))))) ||
               ((((iVar1 = thunk_FUN__text__0066c2d8(0x70bc9f,lVar6,0xe), iVar1 != 0 ||
                  (iVar1 = thunk_FUN__text__0066c2d8(0x718d93,lVar6,7), iVar1 != 0)) &&
                 ((*(ushort *)(lVar9 + 0x15a4) >> 1 & 1) != 0)) &&
                (((*(long *)(lVar9 + 0x1148) != 0 && ((*(byte *)(lVar9 + 0xf42) >> 4 & 1) == 0)) &&
                 (iVar1 = FUN__text__0066c234(*(long *)(lVar9 + 0x1148),param_1[0x1a]), iVar1 == 0))
                )))) goto LAB__text__006605c4;
            iVar1 = FUN__text__00660068(local_78 + 2,0x71d304,lVar6);
          }
          else {
LAB__text__006605c4:
            iVar1 = 0;
          }
          if (lVar7 != 0) {
            FUN__text__006783e4(lVar7);
          }
          if (iVar1 != 0) {
            return iVar1;
          }
        }
      }
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == lVar4) {
      return 0;
    }
  } while( true );
}


