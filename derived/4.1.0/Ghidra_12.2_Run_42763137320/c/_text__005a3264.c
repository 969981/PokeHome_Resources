/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a3264; name: FUN_.text__005a3264
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a3264(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined4 local_60;
  ulong local_58;
  
  if (*(long *)(param_1 + 0x218) != *(long *)(param_1 + 0x210)) {
    lVar8 = *(long *)(param_1 + 0x1e0);
    lVar1 = *(long *)(param_1 + 0x1e8);
    local_58 = 0;
    FUN__text__006ebed8(&local_58);
    piVar2 = _DAT_008a0300;
    local_58 = (local_58 >> 0x10 & 0xffff) << 0x10;
    fVar10 = *(float *)(*_DAT_0089f5b8 + 0x85a4);
    if (lVar8 != 0) {
      FUN__text__006eddd4(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*_DAT_008a0300 * 0x168
                          ,0x80);
      if (*(int *)(*(long *)(param_1 + 0xb0) + 0x90) < 2) {
        if (fVar10 == 1.0 || *(char *)(param_1 + 0x208) == '\0') {
          local_60 = 0;
          local_70 = 0;
          local_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          FUN__text__006ebee4(&local_80);
          uVar3 = FUN__text__005cd4dc(lVar8);
          uStack_78 = CONCAT44(uVar3,(undefined4)uStack_78);
          uVar3 = FUN__text__005cd554(lVar8);
          local_70 = CONCAT44(local_70._4_4_,uVar3);
          FUN__text__006ebed8(&local_68);
          lVar9 = *(long *)(param_1 + 0x60);
          local_68 = (local_68 >> 0x10 & 0xffff) << 0x10;
          uVar6 = FUN__text__0059fd48(lVar8);
          uVar7 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))();
          FUN__text__006ed304(*(long *)(lVar9 + 0x58) + (long)*piVar2 * 0x168,uVar6,&local_58,0,0,0,
                              uVar7,&local_80);
        }
        else {
          local_60 = 0;
          local_70 = 0;
          local_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          FUN__text__006ebee4(&local_80);
          uVar3 = FUN__text__005cd4dc(lVar8);
          uStack_78 = CONCAT44(uVar3,(undefined4)uStack_78);
          uVar3 = FUN__text__005cd554(lVar8);
          local_70 = CONCAT44(local_70._4_4_,uVar3);
          FUN__text__006ebed8(&local_68);
          local_68 = (local_68 >> 0x10 & 0xffff) << 0x10;
          local_88 = 0;
          local_98 = 0;
          local_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          iVar4 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0xb0));
          iVar5 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0xb0));
          FUN__text__006ebee4(&local_a8);
          uStack_a0 = CONCAT44((int)(fVar10 * (float)iVar4),(undefined4)uStack_a0);
          local_98 = CONCAT44(local_98._4_4_,(int)(fVar10 * (float)iVar5));
          FUN__text__006ebed8(&local_90);
          lVar9 = *(long *)(param_1 + 0x60);
          local_90 = (local_90 >> 0x10 & 0xffff) << 0x10;
          uVar6 = FUN__text__0059fd48(lVar8);
          uVar7 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x30))();
          FUN__text__006ed88c(*(long *)(lVar9 + 0x58) + (long)*piVar2 * 0x168,uVar6,&local_80,uVar7,
                              &local_a8,0);
        }
      }
      else {
        lVar9 = *(long *)(param_1 + 0x60);
        uVar6 = FUN__text__0059fd48(lVar8);
        uVar7 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x38))(*(long **)(param_1 + 0xb0),0,0);
        FUN__text__005a0978(*(long *)(lVar9 + 0x58) + (long)*piVar2 * 0x168,uVar6,uVar7);
      }
    }
    if (lVar1 != 0) {
      FUN__text__006eddd4(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*piVar2 * 0x168,0x100)
      ;
      if (*(int *)(*(long *)(param_1 + 0x130) + 0x90) < 2) {
        if (fVar10 == 1.0 || *(char *)(param_1 + 0x208) == '\0') {
          local_60 = 0;
          local_70 = 0;
          local_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          FUN__text__006ebee4(&local_80);
          uVar3 = FUN__text__005cd4dc(lVar1);
          uStack_78 = CONCAT44(uVar3,(undefined4)uStack_78);
          uVar3 = FUN__text__005cd554(lVar1);
          local_70 = CONCAT44(local_70._4_4_,uVar3);
          FUN__text__006ebed8(&local_68);
          lVar8 = *(long *)(param_1 + 0x60);
          local_68 = (local_68 >> 0x10 & 0xffff) << 0x10;
          uVar6 = FUN__text__005a78b8(lVar1);
          uVar7 = FUN__text__005a78b8(*(undefined8 *)(param_1 + 0x130));
          FUN__text__006ed304(*(long *)(lVar8 + 0x58) + (long)*piVar2 * 0x168,uVar6,&local_58,0,0,0,
                              uVar7,&local_80);
        }
        else {
          local_60 = 0;
          local_70 = 0;
          local_68 = 0;
          local_80 = 0;
          uStack_78 = 0;
          FUN__text__006ebee4(&local_80);
          uVar3 = FUN__text__005cd4dc(lVar1);
          uStack_78 = CONCAT44(uVar3,(undefined4)uStack_78);
          uVar3 = FUN__text__005cd554(lVar1);
          local_70 = CONCAT44(local_70._4_4_,uVar3);
          FUN__text__006ebed8(&local_68);
          local_68 = (local_68 >> 0x10 & 0xffff) << 0x10;
          local_88 = 0;
          local_98 = 0;
          local_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          iVar4 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0x130));
          iVar5 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x130));
          FUN__text__006ebee4(&local_a8);
          uStack_a0 = CONCAT44((int)(fVar10 * (float)iVar4),(undefined4)uStack_a0);
          local_98 = CONCAT44(local_98._4_4_,(int)(fVar10 * (float)iVar5));
          FUN__text__006ebed8(&local_90);
          lVar8 = *(long *)(param_1 + 0x60);
          local_90 = (local_90 >> 0x10 & 0xffff) << 0x10;
          uVar6 = FUN__text__005a78b8(lVar1);
          uVar7 = FUN__text__005a78b8(*(undefined8 *)(param_1 + 0x130));
          FUN__text__006ed88c(*(long *)(lVar8 + 0x58) + (long)*piVar2 * 0x168,uVar6,&local_80,uVar7,
                              &local_a8,0);
        }
      }
      else {
        lVar8 = *(long *)(param_1 + 0x60);
        uVar6 = FUN__text__005a78b8(lVar1);
        uVar7 = FUN__text__005a78d8(*(undefined8 *)(param_1 + 0x130),0,0);
        FUN__text__005a0998(*(long *)(lVar8 + 0x58) + (long)*piVar2 * 0x168,uVar6,uVar7);
      }
    }
  }
  FUN__text__005a2ae0(param_1);
  return;
}


