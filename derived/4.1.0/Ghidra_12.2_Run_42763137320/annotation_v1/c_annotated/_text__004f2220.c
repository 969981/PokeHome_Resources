/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F2220
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f2220; name: FUN_.text__004f2220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f2220(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar4 = (long *)param_1[0x24]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_008a5038 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a5038 + 0x2d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = _DAT_008a5038 + 0x330; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = _DAT_008a5038 + 0x2f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1;
  param_1[1] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar4 == (long *)0x0) goto LAB__text__004f2290; // [自动静态注释] 条件判断/分支
  if (*plVar4 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__004f2280: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00400fc0(2,plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(plVar4 + 1) = 0;
    FUN__text__00400fc0(2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *plVar4 = 0;
    *(undefined4 *)((long)plVar4 + 0xc) = 0;
    plVar4 = (long *)param_1[0x24]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar4 != (long *)0x0) goto LAB__text__004f2280; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x24] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004f2290: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *param_1 = 0x88b0b8;
  param_1[1] = 0x88b358; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = 0x88b370; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0x88b3b0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((long *)param_1[0x1f] != (long *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((long *)param_1[0x1f] != param_1 + 0x1e) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    param_1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x104) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0049392c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


