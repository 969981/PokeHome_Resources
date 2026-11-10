/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00285330; name: FUN_.text__00285330
 */


void FUN__text__00285330(long param_1)

{
  uint uVar1;
  char cVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  code *local_180;
  code *local_178;
  code *local_170;
  undefined1 *puStack_168;
  long local_160 [12];
  code *local_100;
  code *local_f8;
  code *local_f0;
  undefined1 *puStack_e8;
  long local_e0 [12];
  uint local_7c;
  uint local_78 [6];
  
  plVar7 = *(long **)(*(long *)(param_1 + 0x4e0) + 0x58);
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  FUN__text__0028cd5c(&local_100,*(undefined8 *)(param_1 + 8));
  pcVar3 = local_100;
  local_100 = (code *)0x0;
  *(undefined8 *)(pcVar3 + 0x60) = 0x224915b031f2adb0;
  local_180 = pcVar3;
  (**(code **)(*plVar7 + 0xd8))(plVar7,&local_180);
  if (local_180 != (code *)0x0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    local_180 = (code *)0x0;
  }
  if (local_100 != (code *)0x0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
  }
  plVar9 = *(long **)(param_1 + 8);
  pcVar6 = *(code **)(param_1 + 0x2d0);
  if (pcVar6 != (code *)0x0) {
    (**(code **)(*(long *)(pcVar6 + 0x48) + 0x10))();
  }
  uVar11 = tpidr_el0;
  uVar11 = uVar11 & 0xffffffffffffe000;
  if (*(long *)(uVar11 + 0x98) == 0x10) {
LAB__text__00285878:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar11 + 0x18 + *(long *)(uVar11 + 0x98) * 8) = plVar9;
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
  lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,0x60,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar9 + 0xb8))(plVar9);
  }
  local_100 = pcVar6;
  FUN__text__003cd4b8(lVar4,&local_100);
  if (local_100 != (code *)0x0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
  }
  *(long **)(lVar4 + 8) = plVar9;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x60;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
  plVar9 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  if (*(long *)(pcVar3 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(pcVar3 + 0x98) + 0x48) + 0x18))();
  }
  *(long *)(pcVar3 + 0x98) = lVar4;
  local_78[0] = (uint)*(byte *)(*(long *)(param_1 + 0x640) + 0x7b228);
  local_78[1] = 0;
  local_78[2] = 0xbf800000;
  local_78[3] = 0x42b00000;
  FUN__text__0028dfac(pcVar3,local_78);
  local_100 = *(code **)(param_1 + 8);
  local_7c = 9;
  lVar4 = FUN__text__0028ce60(&local_180,local_100,&local_7c,&local_100);
  if (lVar4 == 0) {
    if (local_7c != 0) goto LAB__text__00285614;
  }
  else {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (local_7c != 0) {
LAB__text__00285614:
      uVar8 = 0;
      do {
        while( true ) {
          uVar12 = -(uVar8 >> 7 & 1) & 0xfffffffffffff800 | (uVar8 & 0xff) << 3;
          pcVar6 = (code *)FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),uVar12 + 0x7306b0);
          local_100 = *(code **)(uVar12 + 0x7306f8);
          if (local_100 == (code *)0xcbf29ce484222645 || local_100 == (code *)0x0) {
            local_f8 = (code *)0x0;
          }
          else {
            local_f8 = (code *)FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_100);
          }
          cVar2 = (char)uVar8;
          local_f0 = *(code **)((long)cVar2 * 8 + 0x730740);
          plVar10 = (long *)(*(long *)(lVar4 + 0xe0) + *(long *)(lVar4 + 0xe8) * 0x20);
          puStack_e8 = *(undefined1 **)((long)cVar2 * 8 + 0x730788);
          local_100 = pcVar6;
          if (*(long *)(lVar4 + 0xe8) == *(long *)(lVar4 + 0xf0)) break;
          if (*(long *)(uVar11 + 0x98) == 0x10) goto LAB__text__00285878;
          *(undefined8 *)(uVar11 + 0x18 + *(long *)(uVar11 + 0x98) * 8) =
               *(undefined8 *)(lVar4 + 0xa0);
          *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
          plVar10[2] = (long)local_f0;
          plVar10[3] = (long)puStack_e8;
          *plVar10 = (long)pcVar6;
          plVar10[1] = (long)local_f8;
          *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
          *(long *)(lVar4 + 0xe8) = *(long *)(lVar4 + 0xe8) + 1;
          uVar1 = (int)cVar2 + 1;
          uVar8 = (ulong)uVar1;
          if (local_7c <= (uint)(int)(char)uVar1) goto LAB__text__00285550;
        }
        FUN__text__0028ba10(&local_180,lVar4 + 0xa0,plVar10,1,&local_100);
        uVar1 = (int)cVar2 + 1;
        uVar8 = (ulong)uVar1;
      } while ((uint)(int)(char)uVar1 < local_7c);
    }
LAB__text__00285550:
    plVar10 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  lVar5 = *(long *)(pcVar3 + 0xb0);
  *(long *)(pcVar3 + 0xb0) = lVar4;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  pcVar6 = *(code **)(pcVar3 + 0xf8);
  local_100 = (code *)&LAB__text__0028d6a0;
  local_f8 = FUN__text__0028da28;
  local_f0 = FUN__text__0028da2c;
  puStack_e8 = &LAB__text__0028da38;
  local_e0[0] = param_1;
  if (pcVar6 == (code *)0x0) {
LAB__text__00285758:
    (*local_f0)(local_e0,pcVar3 + 0x110);
    *(code **)(pcVar3 + 0xf0) = local_100;
    *(code **)(pcVar3 + 0xf8) = local_f8;
    *(code **)(pcVar3 + 0x100) = local_f0;
    *(undefined1 **)(pcVar3 + 0x108) = puStack_e8;
  }
  else {
    *(undefined8 *)(pcVar3 + 0x100) = 0;
    *(undefined8 *)(pcVar3 + 0x108) = 0;
    *(undefined8 *)(pcVar3 + 0xf0) = 0;
    *(undefined8 *)(pcVar3 + 0xf8) = 0;
    (*pcVar6)(pcVar3 + 0x110);
    if (local_f0 != (code *)0x0) goto LAB__text__00285758;
  }
  pcVar6 = *(code **)(pcVar3 + 0x178);
  local_180 = FUN__text__0028da44;
  local_178 = FUN__text__0028da7c;
  local_170 = FUN__text__0028da80;
  puStack_168 = &LAB__text__0028da8c;
  local_160[0] = param_1;
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(pcVar3 + 0x180) = 0;
    *(undefined8 *)(pcVar3 + 0x188) = 0;
    *(undefined8 *)(pcVar3 + 0x170) = 0;
    *(undefined8 *)(pcVar3 + 0x178) = 0;
    (*pcVar6)(pcVar3 + 400);
    if (local_170 == (code *)0x0) goto LAB__text__002857ec;
  }
  (*local_170)(local_160,pcVar3 + 400);
  *(code **)(pcVar3 + 0x170) = local_180;
  *(code **)(pcVar3 + 0x178) = local_178;
  *(code **)(pcVar3 + 0x180) = local_170;
  *(undefined1 **)(pcVar3 + 0x188) = puStack_168;
LAB__text__002857ec:
  pcVar6 = local_178;
  *(code **)(param_1 + 0x1658) = pcVar3;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    puStack_168 = (undefined1 *)0x0;
    local_180 = (code *)0x0;
    local_178 = (code *)0x0;
    (*pcVar6)(local_160);
  }
  pcVar3 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    puStack_e8 = (undefined1 *)0x0;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar3)(local_e0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  (**(code **)(*plVar9 + 0x18))(plVar9);
  (**(code **)(plVar7[9] + 0x18))(plVar7 + 9);
  return;
}


