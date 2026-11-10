/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f87d0; name: FUN_.text__003f87d0
 */


void FUN__text__003f87d0(long param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  char local_34 [4];
  
  plVar3 = (long *)param_2[1];
  local_34[0] = param_3;
joined_r0x003f87f8:
  do {
    if (plVar3 == (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0xb8);
      if ((plVar3 != (long *)0x0) && (bVar4 = *(byte *)((long)plVar3 + 0x14), (bVar4 & 7) != 0)) {
        do {
          if ((bVar4 & 7) == 2) {
            plVar6 = (long *)(param_1 + 0xc0);
            for (plVar7 = *(long **)(param_1 + 0xc0); plVar7 != (long *)0x0;
                plVar7 = (long *)*plVar7) {
              if (plVar7 == plVar3) {
                *plVar6 = *plVar3;
                break;
              }
              plVar6 = plVar7;
            }
          }
          else {
            lVar5 = *plVar3;
            if (lVar5 == 0) {
              *(undefined8 *)(param_1 + 0xb0) = 0;
            }
            *(long *)(param_1 + 0xb8) = lVar5;
            *plVar3 = 0;
          }
          FUN__text__003fb934(param_1,plVar3,1);
          FUN__text__003fe12c(*(undefined8 *)(param_1 + 0x50));
          plVar3 = *(long **)(param_1 + 0xb8);
        } while ((plVar3 != (long *)0x0) &&
                (bVar4 = *(byte *)((long)plVar3 + 0x14), (bVar4 & 7) != 0));
      }
      if (*(long **)(param_1 + 0xc0) != (long *)0x0) {
        bVar2 = true;
        plVar3 = *(long **)(param_1 + 0xc0);
        do {
          plVar6 = (long *)*plVar3;
          FUN__text__003ff9c0(plVar3,*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x610),bVar2,
                              local_34);
          bVar2 = local_34[0] == '\0';
          plVar3 = plVar6;
        } while (plVar6 != (long *)0x0);
      }
      return;
    }
    plVar6 = (long *)*param_2;
    plVar7 = (long *)*plVar3;
    puVar1 = param_2 + 1;
    if ((long *)param_2[1] != plVar3) {
      puVar1 = (undefined8 *)0x0;
    }
    *puVar1 = plVar7;
    if (plVar6 == plVar3) {
      *param_2 = 0;
      bVar4 = *(byte *)((long)plVar3 + 0x14);
      if ((bVar4 & 7) == 0) goto LAB__text__003f8950;
LAB__text__003f88f0:
      FUN__text__003fb934(param_1,plVar3,0);
      FUN__text__003fe12c(*(undefined8 *)(param_1 + 0x50));
      plVar3 = plVar7;
      goto joined_r0x003f87f8;
    }
    bVar4 = *(byte *)((long)plVar3 + 0x14);
    if ((bVar4 & 7) != 0) goto LAB__text__003f88f0;
LAB__text__003f8950:
    *(byte *)((long)plVar3 + 0x14) = bVar4 & 0xf8 | 2;
    if (*(long *)(param_1 + 0xc0) == 0) {
      *(long **)(param_1 + 0xc0) = plVar3;
      *plVar3 = 0;
      plVar3 = plVar7;
    }
    else {
      *plVar3 = *(long *)(param_1 + 0xc0);
      *(long **)(param_1 + 0xc0) = plVar3;
      plVar3 = plVar7;
    }
  } while( true );
}


