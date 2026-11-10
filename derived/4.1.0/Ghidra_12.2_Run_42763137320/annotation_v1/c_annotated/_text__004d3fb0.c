/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003D3FB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d3fb0; name: FUN_.text__004d3fb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004d3fb0(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = _DAT_008a4f18 + 0x168; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_008a4f18 + 0x10;
  param_1[0x13] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004590f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__004d1470(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar1 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(byte *)((long)param_1 + 0x1ac) = *(byte *)((long)param_1 + 0x1ac) & 0xfc;
  if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*plVar1 + 0x60))(plVar1,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar1 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*plVar1 + 0x10))(plVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00400fc0(5,plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    param_1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = param_1[0x2d]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    if (*(uint *)(param_1 + 0x2e) != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = (ulong)*(uint *)(param_1 + 0x2e) * 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        FUN__text__004d3ca8(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar2 = lVar2 + 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar3 = lVar3 + -0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar3 != 0); // [自动静态注释] 循环/迭代
      lVar2 = param_1[0x2d]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x2e) = 0;
    FUN__text__00400fc0(0,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x2d] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x174) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004d0070(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


