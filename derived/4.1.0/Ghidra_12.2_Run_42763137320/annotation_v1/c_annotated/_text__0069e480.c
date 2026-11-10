/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059E480
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069e480; name: FUN_.text__0069e480
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0069e480(long *param_1,long param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = _DAT_008a68e0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = param_1 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = (long)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = param_2 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar6 + 0x10;
  param_1[1] = (long)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *(long *)(param_2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = lVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *(long *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = lVar6 != lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_3 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    while (bVar3) { // [自动静态注释] 循环/迭代
      lVar4 = *(long *)(lVar6 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = (long *)FUN__text__006a0f04(0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        *plVar5 = (long)plVar5;
        plVar5[1] = (long)plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar5[2] = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar5 = *plVar1;
        plVar5[1] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(*plVar1 + 8) = plVar5;
        *plVar1 = (long)plVar5;
      } // [自动静态注释] 作用域/控制流边界
      lVar6 = *(long *)(lVar6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar3 = lVar6 != lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    while (bVar3) { // [自动静态注释] 循环/迭代
      lVar4 = (**(code **)(*param_3 + 0x78))(param_3,*(long *)(lVar6 + 0x10) + 0xb0,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = (long *)FUN__text__006a0f04(0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        *plVar5 = (long)plVar5;
        plVar5[1] = (long)plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar5[2] = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar5 = *plVar1;
        plVar5[1] = (long)plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(*plVar1 + 8) = plVar5;
        *plVar1 = (long)plVar5;
      } // [自动静态注释] 作用域/控制流边界
      lVar6 = *(long *)(lVar6 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar3 = lVar6 != lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


