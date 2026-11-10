/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006023c0; name: FUN_.text__006023c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006023c0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long local_70;
  long *local_68;
  long local_60;
  long local_58;
  
  FUN__text__006026d0(&local_70);
  lVar8 = local_70;
  plVar2 = _DAT_008a5de0;
  local_70 = 0;
  lVar6 = *_DAT_008a5de0;
  *_DAT_008a5de0 = lVar8;
  if (lVar6 == 0) {
    plVar2[1] = (long)local_68;
    plVar2[2] = local_60;
    plVar2[3] = local_58;
  }
  else {
    lVar8 = 0x240;
    do {
      lVar1 = lVar6 + lVar8;
      if ((*(long *)(lVar1 + 0x68) != 0) && (*(long *)(lVar1 + 0x50) != 0)) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + 0x48) + 0x18))();
      }
      *(undefined8 *)(lVar1 + 0x50) = 0;
      *(undefined8 *)(lVar1 + 0x58) = 0xcbf29ce484222645;
      *(undefined8 *)(lVar1 + 0x60) = 0x70f683;
      *(undefined8 *)(lVar1 + 0x68) = 0;
      if (*(long *)(lVar1 + 0x70) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + 0x70) + 0x48) + 0x18))();
      }
      lVar8 = lVar8 + -0x30;
      *(undefined8 *)(lVar1 + 0x70) = 0;
      *(undefined4 *)(lVar1 + 0x78) = 0;
    } while (lVar8 != 0);
    (**(code **)(*(long *)plVar2[1] + 0x18))((long *)plVar2[1],lVar6,plVar2[2],plVar2[3]);
    lVar8 = local_70;
    local_70 = 0;
    plVar2[3] = local_58;
    plVar2[1] = (long)local_68;
    plVar2[2] = local_60;
    if (lVar8 != 0) {
      lVar6 = 0x240;
      do {
        lVar1 = lVar8 + lVar6;
        if ((*(long *)(lVar1 + 0x68) != 0) && (*(long *)(lVar1 + 0x50) != 0)) {
          (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + 0x48) + 0x18))();
        }
        *(undefined8 *)(lVar1 + 0x50) = 0;
        *(undefined8 *)(lVar1 + 0x58) = 0xcbf29ce484222645;
        *(undefined8 *)(lVar1 + 0x60) = 0x70f683;
        *(undefined8 *)(lVar1 + 0x68) = 0;
        if (*(long *)(lVar1 + 0x70) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar1 + 0x70) + 0x48) + 0x18))();
        }
        lVar6 = lVar6 + -0x30;
        *(undefined8 *)(lVar1 + 0x70) = 0;
        *(undefined4 *)(lVar1 + 0x78) = 0;
      } while (lVar6 != 0);
      (**(code **)(*local_68 + 0x18))(local_68,lVar8,local_60,local_58);
    }
  }
  puVar7 = (undefined8 *)*plVar2;
  uVar4 = param_2[7];
  uVar3 = param_2[4];
  uVar5 = param_2[5];
  puVar7[6] = param_2[6];
  puVar7[7] = uVar4;
  puVar7[4] = uVar3;
  puVar7[5] = uVar5;
  uVar4 = param_2[0xb];
  uVar3 = param_2[8];
  uVar5 = param_2[9];
  puVar7[10] = param_2[10];
  puVar7[0xb] = uVar4;
  puVar7[8] = uVar3;
  puVar7[9] = uVar5;
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xd];
  puVar7[0xe] = param_2[0xe];
  puVar7[0xf] = uVar4;
  puVar7[0xc] = uVar3;
  puVar7[0xd] = uVar5;
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  puVar7[2] = param_2[2];
  puVar7[3] = uVar5;
  *puVar7 = uVar3;
  puVar7[1] = uVar4;
  FUN__text__00168178(puVar7 + 0x10,param_2 + 0x10);
  FUN__text__00168178(puVar7 + 0x16,param_2 + 0x16);
  FUN__text__00168178(puVar7 + 0x1c,param_2 + 0x1c);
  FUN__text__00168178(puVar7 + 0x22,param_2 + 0x22);
  FUN__text__00168178(puVar7 + 0x28,param_2 + 0x28);
  FUN__text__00168178(puVar7 + 0x2e,param_2 + 0x2e);
  FUN__text__00168178(puVar7 + 0x34,param_2 + 0x34);
  FUN__text__00168178(puVar7 + 0x3a,param_2 + 0x3a);
  FUN__text__00168178(puVar7 + 0x40,param_2 + 0x40);
  FUN__text__00168178(puVar7 + 0x46,param_2 + 0x46);
  FUN__text__00168178(puVar7 + 0x4c,param_2 + 0x4c);
  FUN__text__00168178(puVar7 + 0x52,param_2 + 0x52);
  puVar7[0x58] = param_2[0x58];
  uVar3 = param_2[0x5a];
  uVar4 = param_2[0x5b];
  uVar5 = param_2[0x5c];
  puVar7[0x59] = param_2[0x59];
  puVar7[0x5c] = uVar5;
  puVar7[0x5b] = uVar4;
  puVar7[0x5a] = uVar3;
  FUN__text__0060299c();
  FUN__text__006496a4();
  FUN__text__006414c8();
  FUN__text__00643e14();
  FUN__text__0064af58();
  FUN__text__0064565c();
  FUN__text__0063741c();
  FUN__text__00600d40(param_1);
  FUN__text__00643e14();
  FUN__text__006414c8();
  FUN__text__00622e38();
  FUN__text__00642080(param_1);
  FUN__text__0063f020(param_1);
  FUN__text__00646480(param_1);
  FUN__text__00640720(param_1);
  FUN__text__006432f0(param_1);
  FUN__text__0064a3e0(param_1);
  FUN__text__00644a30(param_1);
  FUN__text__0063b704(param_1);
  FUN__text__005fdc50(param_1);
  return;
}


