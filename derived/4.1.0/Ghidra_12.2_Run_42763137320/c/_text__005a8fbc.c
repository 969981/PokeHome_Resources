/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a8fbc; name: FUN_.text__005a8fbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a8fbc(long param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  
  if (DAT_00b11150 == (void *)0x0) {
    if (*(char *)(param_1 + 0xad) == '\0') {
      plVar8 = *(long **)(param_1 + 8);
      uVar9 = *(undefined8 *)(param_1 + 0x78);
      pvVar2 = (void *)(**(code **)(*plVar8 + 0x10))(plVar8,uVar9,0x1000);
      lVar6 = *(long *)(param_1 + 0x140);
      *(void **)(param_1 + 0x140) = pvVar2;
      if (lVar6 != 0) {
        (**(code **)(**(long **)(param_1 + 0x148) + 0x18))
                  (*(long **)(param_1 + 0x148),lVar6,*(undefined8 *)(param_1 + 0x150),
                   *(undefined8 *)(param_1 + 0x158));
        pvVar2 = *(void **)(param_1 + 0x140);
      }
      *(undefined8 *)(param_1 + 0x158) = 0x1000;
      *(long **)(param_1 + 0x148) = plVar8;
      *(undefined8 *)(param_1 + 0x150) = uVar9;
      nv::InitializeGraphics(pvVar2,*(ulong *)(param_1 + 0x78));
      plVar8 = *(long **)(param_1 + 8);
      lVar6 = *_DAT_008a5668;
      *(long **)(lVar6 + 0x10) = plVar8;
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_1 + 0x80);
      plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 0x80),8);
      *(long **)(lVar6 + 0x18) = plVar8;
      if (plVar8 == (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + 0x10) + 0xb8))();
        plVar8 = *(long **)(lVar6 + 0x18);
      }
      FUN__text__005f6b94(plVar8,plVar8 + 0x16,*(long *)(param_1 + 0x80) + -0xb0,0);
      *(undefined1 *)(plVar8 + 0x15) = 0;
      lVar5 = _DAT_0089f3b0 + 0xe8;
      *plVar8 = _DAT_0089f3b0 + 0x10;
      plVar8[1] = lVar5;
      *(long **)(lVar6 + 8) = plVar8;
      DAT_00b11148 = plVar8;
      nv::SetGraphicsAllocator
                (FUN__text__005a9ae0,(_func_void_void_ptr_void_ptr *)&LAB__text__005a9b60,
                 FUN__text__005a9ba0,plVar8);
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x78);
      DAT_00b11150 = (void *)aligned_alloc(0x1000,uVar7);
      nv::InitializeGraphics(DAT_00b11150,uVar7);
      nv::SetGraphicsAllocator
                (FUN__text__005a9ae0,(_func_void_void_ptr_void_ptr *)&LAB__text__005a9b60,
                 FUN__text__005a9ba0,(void *)0x0);
      nv::SetGraphicsDevtoolsAllocator
                (FUN__text__005a9ae0,(_func_void_void_ptr_void_ptr *)&LAB__text__005a9b60,
                 FUN__text__005a9ba0,(void *)0x0);
    }
  }
  nn::vi::Initialize();
  FUN__text__006f5db0();
  FUN__text__005a7a80();
  plVar8 = _DAT_008a0228;
  FUN__text__005a9c54(*_DAT_008a0228,0);
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) != 0x10) {
    lVar6 = uVar7 + 0x18;
    uVar9 = *(undefined8 *)(param_1 + 8);
    plVar11 = *(long **)(*plVar8 + 8);
    lVar5 = *(long *)(*plVar8 + 0x10);
    *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = plVar11;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    lVar3 = (**(code **)(*plVar11 + 0x10))(plVar11,0x278,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN__text__005ace68(lVar3,uVar9,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c))
    ;
    *(long **)(lVar3 + 8) = plVar11;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x278;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar4 = *(long *)(lVar5 + 8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    *(long *)(lVar5 + 8) = lVar3;
    if (*(long *)(uVar7 + 0x98) != 0x10) {
      uVar9 = *(undefined8 *)(param_1 + 8);
      plVar11 = *(long **)(*plVar8 + 8);
      plVar1 = *(long **)(*plVar8 + 0x10);
      *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = plVar11;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      lVar5 = (**(code **)(*plVar11 + 0x10))(plVar11,0x278,8);
      if (lVar5 == 0) {
        (**(code **)(*plVar11 + 0xb8))(plVar11);
      }
      FUN__text__005ace68(lVar5,uVar9,*(undefined8 *)(param_1 + 0x50),
                          *(undefined4 *)(param_1 + 0x5c));
      *(long **)(lVar5 + 8) = plVar11;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x278;
      *(undefined8 *)(lVar5 + 0x20) = 8;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      *plVar1 = lVar5;
      FUN__text__005a9c54(*plVar8,1);
      if (*(long *)(uVar7 + 0x98) != 0x10) {
        lVar5 = *plVar8;
        uVar9 = *(undefined8 *)(param_1 + 8);
        plVar8 = *(long **)(lVar5 + 8);
        plVar11 = *(long **)(lVar5 + 0x30);
        uVar10 = **(undefined8 **)(lVar5 + 0x10);
        *(long **)(lVar6 + *(long *)(uVar7 + 0x98) * 8) = plVar8;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
        lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x160,8);
        if (lVar6 == 0) {
          (**(code **)(*plVar8 + 0xb8))(plVar8);
        }
        FUN__text__005ad65c(lVar6,uVar9,uVar10,*(undefined8 *)(param_1 + 0x90),4);
        *(long **)(lVar6 + 8) = plVar8;
        *(long *)(lVar6 + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x18) = 0x160;
        *(undefined8 *)(lVar6 + 0x20) = 8;
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        lVar5 = *plVar11;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
        }
        *plVar11 = lVar6;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


