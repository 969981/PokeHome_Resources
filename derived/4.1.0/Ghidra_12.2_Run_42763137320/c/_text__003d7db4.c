/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7db4; name: FUN_.text__003d7db4
 */


void FUN__text__003d7db4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  ulong *puVar8;
  undefined2 *__dest;
  long *plVar9;
  long lVar10;
  long local_240;
  long local_238;
  long local_230 [64];
  
  __dest = *(undefined2 **)(param_1 + 8);
  if (*(int *)(__dest + 0x114) != 0) {
    return;
  }
  FUN__text__003d6864(*(undefined8 *)(__dest + 0x110),0x2c8);
  uVar4 = *(uint *)(__dest + 0x10e);
  *(uint *)(__dest + 0x10e) = uVar4 & 0xfffffffb;
  *(long *)(__dest + 0x11c) = (*(long *)(__dest + 0x104) - (long)__dest) + *(long *)(__dest + 0x11c)
  ;
  if ((uVar4 & 1) == 0) {
    lVar10 = *(long *)(__dest + 0x110);
    uVar7 = 1;
    if ((uVar4 & 2) == 0) {
      uVar7 = 2;
    }
    if (*(ulong *)(lVar10 + 0x18) < *(long *)(lVar10 + 0x10) + 0x200U) {
      lVar6 = FUN__text__003d65e0(lVar10,local_230,0x200);
    }
    else {
      lVar6 = 0x200;
      memcpy(local_230,(void *)(*(long *)(lVar10 + 0x28) + *(long *)(lVar10 + 0x10)),0x200);
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 0x200;
    }
    iVar5 = FUN__text__003e3830(&local_240,&local_238,__dest,0x200,local_230,lVar6,uVar7);
    if ((iVar5 == 0x22) || (local_238 != local_240)) {
      *(uint *)(__dest + 0x10e) = *(uint *)(__dest + 0x10e) | 4;
      if (lVar6 != local_238) {
        FUN__text__003d6a10(*(undefined8 *)(__dest + 0x110));
        FUN__text__003d6864(*(undefined8 *)(__dest + 0x110),0x2c8);
        plVar9 = *(long **)(__dest + 0x110);
        if (local_238 < 0) {
          if (*(int *)((long)plVar9 + 0x3c) == 0) {
            *(undefined4 *)((long)plVar9 + 0x3c) = 0x16;
          }
        }
        else {
          puVar8 = (ulong *)(plVar9 + 2);
          uVar2 = *puVar8;
          uVar3 = plVar9[3];
          uVar1 = uVar2 + local_238;
          if (uVar3 < uVar1) {
            *puVar8 = 0;
            plVar9[3] = 0;
            plVar9[1] = plVar9[1] + uVar3;
            lVar10 = (**(code **)(*plVar9 + 0x20))(plVar9,(local_238 - uVar3) + uVar2);
            plVar9[1] = plVar9[1] + lVar10;
          }
          else {
            *puVar8 = uVar1;
          }
        }
      }
    }
    else if (local_238 != lVar6) {
      if (local_238 == 0) {
        if ((*(uint *)(__dest + 0x10e) >> 1 & 1) == 0) {
          local_240 = 0;
        }
        else {
          *(undefined1 *)(__dest + 1) = 0xbd;
          *__dest = 0xbfef;
          local_240 = 3;
          if (lVar6 == 3) goto LAB__text__003d80e8;
        }
        *(uint *)(__dest + 0x10e) = *(uint *)(__dest + 0x10e) | 4;
      }
      else {
        FUN__text__003d6a10(*(undefined8 *)(__dest + 0x110));
        FUN__text__003d6864(*(undefined8 *)(__dest + 0x110),0x2c8);
        FUN__text__003d7d00(*(undefined8 *)(__dest + 0x110),local_238);
      }
    }
LAB__text__003d80e8:
    *(undefined2 **)(__dest + 0x104) = __dest;
    local_230[0] = (long)__dest + local_240;
  }
  else {
    lVar10 = *(long *)(__dest + 0x110);
    if (*(ulong *)(lVar10 + 0x18) < *(long *)(lVar10 + 0x10) + 0x200U) {
      lVar6 = FUN__text__003d65e0(lVar10,__dest,0x200);
    }
    else {
      lVar6 = 0x200;
      memcpy(__dest,(void *)(*(long *)(lVar10 + 0x28) + *(long *)(lVar10 + 0x10)),0x200);
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 0x200;
    }
    *(undefined2 **)(__dest + 0x104) = __dest;
    *(long *)(__dest + 0x108) = (long)__dest + lVar6;
    iVar5 = FUN__text__003e3830(0,local_230,0,0,__dest,lVar6,0);
    if ((iVar5 != 0x54) && (local_230[0] == lVar6)) goto LAB__text__003d80f8;
    FUN__text__003d6a10(*(undefined8 *)(__dest + 0x110));
    if (local_230[0] == 0) {
      if (*(int *)(__dest + 0x114) == 0) {
        *(undefined4 *)(__dest + 0x114) = 0x54;
      }
      local_230[0] = *(long *)(__dest + 0x104);
    }
    else {
      FUN__text__003d6864(*(undefined8 *)(__dest + 0x110),0x2c8);
      plVar9 = *(long **)(__dest + 0x110);
      if (local_230[0] < 0) {
        if (*(int *)((long)plVar9 + 0x3c) == 0) {
          *(undefined4 *)((long)plVar9 + 0x3c) = 0x16;
        }
      }
      else {
        puVar8 = (ulong *)(plVar9 + 2);
        uVar2 = *puVar8;
        uVar3 = plVar9[3];
        uVar1 = uVar2 + local_230[0];
        if (uVar3 < uVar1) {
          *puVar8 = 0;
          plVar9[3] = 0;
          plVar9[1] = plVar9[1] + uVar3;
          lVar10 = (**(code **)(*plVar9 + 0x20))(plVar9,(local_230[0] - uVar3) + uVar2);
          plVar9[1] = plVar9[1] + lVar10;
        }
        else {
          *puVar8 = uVar1;
        }
      }
      local_230[0] = *(long *)(__dest + 0x104) + local_230[0];
    }
  }
  *(long *)(__dest + 0x108) = local_230[0];
LAB__text__003d80f8:
  FUN__text__003d73a0(__dest);
  return;
}


