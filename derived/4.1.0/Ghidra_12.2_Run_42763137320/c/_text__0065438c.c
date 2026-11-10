/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065438c; name: thunk_FUN_.text__0064f6d4
 */


undefined8
thunk_FUN__text__0064f6d4(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  long *__s;
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined1 (*pauVar6) [16];
  long *plVar7;
  undefined1 auVar8 [16];
  undefined4 uStack_54;
  
  uStack_54 = 0;
  pauVar6 = *(undefined1 (**) [16])(*param_1 + 0x1288);
  *param_4 = 0;
  iVar1 = FUN__text__006569e8(2,param_2,&uStack_54);
  if (0 < iVar1) {
    uVar2 = FUN__text__006518cc(2,&uStack_54,param_2,param_3);
    return uVar2;
  }
  auVar8 = FUN__text__0066c6a8();
  *pauVar6 = auVar8;
  plVar3 = (long *)FUN__text__00678414(1,0x90);
  param_1[0xa6] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    __s = plVar3 + 3;
    *(undefined4 *)(param_1 + 0xa3) = param_3;
    *(undefined4 *)(param_1 + 0xa5) = 0;
    param_1[0xa4] = 0;
    *(byte *)(param_1 + 0xa7) = *(byte *)(param_1 + 0xa7) & 0xfe;
    *plVar3 = 0;
    memset(__s,0,0x70);
    plVar3[0x11] = (long)plVar3;
    *(undefined4 *)(plVar3 + 6) = param_3;
    *(undefined4 *)(plVar3 + 4) = 1;
    lVar4 = FUN__text__006783d4(0x20);
    plVar3[3] = lVar4;
    if (lVar4 != 0) {
      nnosInitializeMutex(lVar4,0,1);
      *(undefined4 *)((long)plVar3 + 0x34) = 0;
      *(undefined1 *)(plVar3 + 10) = 0;
      plVar3[8] = 0x6400007531;
      plVar3[9] = 1;
      if (*param_1 != 0) {
        *(byte *)(plVar3 + 10) = *(byte *)(*param_1 + 0x6c1) ^ 1;
      }
      plVar7 = plVar3 + 0xb;
      *plVar7 = 0x6500002711;
      plVar3[0xc] = 4;
      nnsocketResolverGetOption(plVar7,0x2711);
      *(undefined1 *)(plVar3 + 0x10) = 1;
      *(undefined4 *)plVar7 = 0x7532;
      plVar3[0xe] = 0x6400007533;
      plVar3[0xf] = 1;
      if (*param_1 != 0) {
        *(byte *)(plVar3 + 0x10) = *(byte *)(*param_1 + 0x6c2) ^ 1;
      }
      lVar4 = FUN__text__00678404(param_2);
      plVar3[5] = lVar4;
      if (lVar4 != 0) {
        param_1 = param_1 + 0xa2;
        FUN__text__006783e4(*param_1);
        lVar4 = FUN__text__00678404(param_2);
        *param_1 = lVar4;
        if (lVar4 == 0) {
          iVar1 = 0xc;
        }
        else {
          *(undefined4 *)(plVar3 + 4) = 0;
          lVar4 = FUN__text__00686f28(&LAB__text__0064f970,__s);
          *plVar3 = lVar4;
          if (lVar4 != 0) {
            *param_4 = 1;
            return 0;
          }
          *(undefined4 *)(plVar3 + 4) = 1;
          piVar5 = __errno_location();
          iVar1 = *piVar5;
        }
        FUN__text__0064f344(param_1);
        goto LAB__text__0064f8a4;
      }
    }
    FUN__text__0064f920(__s);
    param_1[0xa6] = 0;
    FUN__text__006783e4(plVar3);
  }
  iVar1 = 0xc;
LAB__text__0064f8a4:
  piVar5 = __errno_location();
  *piVar5 = iVar1;
  uVar2 = FUN__text__006543a0(param_2,param_3,0,0);
  return uVar2;
}


