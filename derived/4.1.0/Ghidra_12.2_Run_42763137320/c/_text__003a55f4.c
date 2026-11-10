/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a55f4; name: FUN_.text__003a55f4
 */


void FUN__text__003a55f4(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0xa8);
  if (*(int *)(param_1 + 0x290) < 1) {
    if ((*plVar1 != -0x340d631b7bddd9bb && *plVar1 != 0) &&
       ((**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),plVar1,0),
       1 < *(int *)(param_1 + 0x290))) goto LAB__text__003a5664;
LAB__text__003a56dc:
    lVar3 = *(long *)(param_1 + 0xb8);
    if ((lVar3 != -0x340d631b7bddd9bb) && (lVar3 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x60))
                (*(long **)(param_1 + 0x98),(long *)(param_1 + 0xb8),0);
      iVar2 = *(int *)(param_1 + 0x290);
      goto joined_r0x003a575c;
    }
    if (2 < *(int *)(param_1 + 0x290)) goto LAB__text__003a56fc;
LAB__text__003a5760:
    lVar3 = *(long *)(param_1 + 200);
    if (((lVar3 == -0x340d631b7bddd9bb) || (lVar3 == 0)) ||
       ((**(code **)(**(long **)(param_1 + 0x98) + 0x60))
                  (*(long **)(param_1 + 0x98),(long *)(param_1 + 200),0),
       *(int *)(param_1 + 0x290) < 4)) goto LAB__text__003a57cc;
LAB__text__003a5794:
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),param_1 + 0xd8,1);
    (**(code **)(**(long **)(param_1 + 0x98) + 0xe8))
              (*(long **)(param_1 + 0x98),param_1 + 0xd8,*(undefined8 *)(param_1 + 0x208));
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),plVar1,1);
    (**(code **)(**(long **)(param_1 + 0x98) + 0xe8))
              (*(long **)(param_1 + 0x98),plVar1,*(undefined8 *)(param_1 + 0x1f0));
    if (*(int *)(param_1 + 0x290) < 2) goto LAB__text__003a56dc;
LAB__text__003a5664:
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),param_1 + 0xb8,1);
    (**(code **)(**(long **)(param_1 + 0x98) + 0xe8))
              (*(long **)(param_1 + 0x98),param_1 + 0xb8,*(undefined8 *)(param_1 + 0x1f8));
    iVar2 = *(int *)(param_1 + 0x290);
joined_r0x003a575c:
    if (iVar2 < 3) goto LAB__text__003a5760;
LAB__text__003a56fc:
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),param_1 + 200,1);
    (**(code **)(**(long **)(param_1 + 0x98) + 0xe8))
              (*(long **)(param_1 + 0x98),param_1 + 200,*(undefined8 *)(param_1 + 0x200));
    if (3 < *(int *)(param_1 + 0x290)) goto LAB__text__003a5794;
LAB__text__003a57cc:
    lVar3 = *(long *)(param_1 + 0xd8);
    if ((lVar3 != -0x340d631b7bddd9bb) && (lVar3 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x60))
                (*(long **)(param_1 + 0x98),(long *)(param_1 + 0xd8),0);
    }
  }
  if (*(int *)(param_1 + 0x290) < 5) {
    lVar3 = *(long *)(param_1 + 0xe8);
    if ((lVar3 != -0x340d631b7bddd9bb) && (lVar3 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x60))
                (*(long **)(param_1 + 0x98),(long *)(param_1 + 0xe8),0);
      iVar2 = *(int *)(param_1 + 0x290);
      goto joined_r0x003a5874;
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),param_1 + 0xe8,1);
    (**(code **)(**(long **)(param_1 + 0x98) + 0xe8))
              (*(long **)(param_1 + 0x98),param_1 + 0xe8,*(undefined8 *)(param_1 + 0x210));
    iVar2 = *(int *)(param_1 + 0x290);
joined_r0x003a5874:
    if (5 < iVar2) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),param_1 + 0xf8,1)
      ;
      (**(code **)(**(long **)(param_1 + 0x98) + 0xe8))
                (*(long **)(param_1 + 0x98),param_1 + 0xf8,*(undefined8 *)(param_1 + 0x218));
      goto LAB__text__003a58d8;
    }
  }
  lVar3 = *(long *)(param_1 + 0xf8);
  if ((lVar3 != -0x340d631b7bddd9bb) && (lVar3 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))
              (*(long **)(param_1 + 0x98),(long *)(param_1 + 0xf8),0);
  }
LAB__text__003a58d8:
  if (*(int *)(param_1 + 0x290) < 7) {
    if ((*(long *)(param_1 + 0x108) != -0x340d631b7bddd9bb) && (*(long *)(param_1 + 0x108) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x60))
                (*(long **)(param_1 + 0x98),param_1 + 0x108,0);
    }
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),param_1 + 0x108,1);
    (**(code **)(**(long **)(param_1 + 0x98) + 0xe8))
              (*(long **)(param_1 + 0x98),param_1 + 0x108,*(undefined8 *)(param_1 + 0x220));
  }
                    /* WARNING: Could not recover jumptable at 0x003a5964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x98) + 0x60))(*(long **)(param_1 + 0x98),param_1 + 0x138,0);
  return;
}


