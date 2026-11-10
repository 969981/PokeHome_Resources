/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0041D3F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051d3f0; name: FUN_.text__0051d3f0
 */


long * FUN__text__0051d3f0(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)((long)param_1 + 0xc) < uVar1) { // [自动静态注释] 条件判断/分支
    if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
      lVar2 = FUN__text__00400f80(0xb,(ulong)uVar1 << 3); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar2 == 0) goto LAB__text__0051d4a4; // [自动静态注释] 条件判断/分支
      if ((*param_1 != 0) && (*param_1 != lVar2)) { // [自动静态注释] 条件判断/分支
        FUN__text__00400fc0(0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar2 = FUN__text__00400fa0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar2 == 0) goto LAB__text__0051d4a4; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    *param_1 = lVar2;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 1) = uVar1;
  if ((int)param_2[1] != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar2 = uVar3 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(*param_1 + lVar2) = *(undefined8 *)(*param_2 + lVar2);
    } while (uVar3 < *(uint *)(param_2 + 1)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0051d4a4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  param_1[2] = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


