/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004BDFD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bdfd0; name: FUN_.text__005bdfd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bdfd0(ulong param_1,uint *param_2,uint *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_270 [528]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = _DAT_008a0208; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = _DAT_008a0200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pbVar2 = _DAT_008a01f8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar8 = *(long *)(param_1 + 0x620); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = param_1 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar8 != 3) { // [自动静态注释] 条件判断/分支
    uVar6 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar7 = *(long *)(param_1 + 0x7e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(param_1 + 0x7f0) == lVar7) { // [自动静态注释] 条件判断/分支
        FUN__text__005c1060(param_1 + 0x7e8); // [自动静态注释] 调用尚未恢复正式名称的函数
        goto LAB__text__005be15c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (((*pbVar2 & 1) == 0) && (uVar6 = __cxa_guard_acquire(pbVar2), (int)uVar6 != 0)) { // [自动静态注释] 条件判断/分支
        *puVar9 = 0xcbf29ce484222645;
        puVar9[1] = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar9[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar9[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__001001d0(uVar4,puVar9,&__DT_FINI_ARRAY,lVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar6 = __cxa_guard_release(pbVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (*(long *)(param_1 + 0x620) == 3) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10(uVar6,lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      uVar6 = FUN__text__005d51dc(lVar1 + *(long *)(param_1 + 0x620) * 0x200,lVar7,4,lVar8,puVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar8 = *(long *)(param_1 + 0x620) + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(param_1 + 0x620) = lVar8;
    } while (lVar8 != 3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  puVar9 = *(undefined8 **)(param_1 + 0x7e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3 = (uint *)(ulong)*param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 < (uint *)(*(long *)(param_1 + 0x7f0) - (long)puVar9 >> 9)) { // [自动静态注释] 条件判断/分支
    param_1 = (ulong)*param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*pbVar2 & 1) != 0) goto LAB__text__005be038; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__005be15c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__005c1060(param_1 + 0x7e8); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  iVar5 = __cxa_guard_acquire(_DAT_008a01f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = _DAT_008a0200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar5 != 0) { // [自动静态注释] 条件判断/分支
    *_DAT_008a0200 = 0xcbf29ce484222645;
    puVar3[1] = 0x70f683; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__001001d0(_DAT_008a0208,puVar3,&__DT_FINI_ARRAY); // [自动静态注释] 调用尚未恢复正式名称的函数
    __cxa_guard_release(_DAT_008a01f8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
LAB__text__005be038: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__005d51dc(auStack_270,puVar9 + (long)param_3 * 0x40,4,param_1 & 0xffffffff,_DAT_008a0200 // [自动静态注释] 调用尚未恢复正式名称的函数
                     ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0014d25c(lVar1 + (long)(int)*param_2 * 0x200,auStack_270); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0014821c(auStack_270); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


