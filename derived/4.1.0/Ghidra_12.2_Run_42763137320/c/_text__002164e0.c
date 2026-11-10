/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002164e0; name: FUN_.text__002164e0
 */


void FUN__text__002164e0(undefined8 *param_1,uint *param_2,long *param_3,int param_4)

{
  void *__s;
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  void *__s_00;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong __n;
  long *plVar11;
  void *pvVar12;
  ulong uVar13;
  
  uVar4 = *param_2;
  __n = (ulong)uVar4;
  plVar11 = *(long **)(DAT_008e1518 + 0x2a8);
  __s_00 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,__n,1);
  uVar13 = tpidr_el0;
  uVar13 = uVar13 & 0xffffffffffffe000;
  if (*(long *)(uVar13 + 0x98) != 0x10) {
    *(long **)(uVar13 + 0x18 + *(long *)(uVar13 + 0x98) * 8) = plVar11;
    lVar8 = *(long *)(uVar13 + 0x98);
    *(long *)(uVar13 + 0x98) = lVar8 + 1;
    if (uVar4 != 0) {
      memset(__s_00,0,__n);
      lVar8 = *(long *)(uVar13 + 0x98) + -1;
    }
    *(long *)(uVar13 + 0x98) = lVar8;
    memcpy(__s_00,*(void **)(param_2 + 2),(ulong)*param_2);
    lVar8 = 0;
    pvVar12 = __s_00;
    do {
      __s = (void *)((long)__s_00 + lVar8 * 0x1000);
      uVar4 = param_2[0xf];
      uVar5 = *(uint *)((long)__s + 0xffc);
      puVar2 = param_2 + 0x36;
      if (uVar5 != param_2[0x37]) {
        puVar2 = (uint *)0x0;
      }
      puVar3 = param_2 + 0xe;
      if (uVar5 != uVar4) {
        puVar3 = puVar2;
      }
      if (param_4 == 2) {
        if (puVar3 == (uint *)0x0) {
LAB__text__002167a8:
          param_1[2] = 0;
          param_1[3] = 0;
          *param_1 = 0;
          param_1[1] = 0;
          goto LAB__text__002167b4;
        }
        memset(__s,0,0xff4);
        memcpy(__s,(void *)(*(long *)(puVar3 + 4) + (ulong)*(ushort *)((long)__s + 0xff4) * 0xf80),
               0xf80);
        uVar7 = 0xfffffffc;
        if (uVar5 == uVar4) {
          uVar7 = 0xfffffffd;
        }
        *(undefined4 *)((long)__s + 0xffc) = uVar7;
      }
      else {
        if (param_4 == 1) {
          memset(__s,0,0xff4);
          lVar9 = *(long *)(param_2 + 0x12);
        }
        else {
          if (param_4 != 0) goto LAB__text__002166c0;
          if (puVar3 == (uint *)0x0) goto LAB__text__002167a8;
          memset(__s,0,0xff4);
          lVar9 = *(long *)(puVar3 + 4);
        }
        memcpy(__s,(void *)(lVar9 + (ulong)*(ushort *)((long)__s + 0xff4) * 0xf80),0xf80);
      }
LAB__text__002166c0:
      lVar9 = 0;
      iVar10 = 0;
      while( true ) {
        piVar1 = (int *)((long)pvVar12 + lVar9);
        iVar10 = piVar1[4] + piVar1[3] + piVar1[2] + piVar1[1] + *piVar1 + iVar10;
        if ((int)lVar9 == 0xfe0) break;
        lVar9 = lVar9 + 0x20;
        iVar10 = piVar1[7] + piVar1[6] + piVar1[5] + iVar10;
      }
      lVar8 = lVar8 + 1;
      pvVar12 = (void *)((long)pvVar12 + 0x1000);
      *(short *)((long)__s + 0xff6) = (short)iVar10 + (short)((uint)iVar10 >> 0x10);
    } while (lVar8 != 0x1c);
    uVar6 = (**(code **)(*param_3 + 0x10))(param_3,0x178,8);
    if (*(long *)(uVar13 + 0x98) != 0x10) {
      *(long **)(uVar13 + 0x18 + *(long *)(uVar13 + 0x98) * 8) = param_3;
      *(long *)(uVar13 + 0x98) = *(long *)(uVar13 + 0x98) + 1;
      FUN__text__00215ccc();
      param_1[2] = 0x178;
      param_1[3] = 8;
      lVar8 = *(long *)(uVar13 + 0x98);
      *param_1 = uVar6;
      param_1[1] = param_3;
      *(long *)(uVar13 + 0x98) = lVar8 + -1;
      FUN__text__00215e18(uVar6,param_3,__s_00,*param_2,param_2[10],(char)param_2[0xb]);
LAB__text__002167b4:
                    /* WARNING: Could not recover jumptable at 0x002167e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x18))(plVar11,__s_00,__n,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


