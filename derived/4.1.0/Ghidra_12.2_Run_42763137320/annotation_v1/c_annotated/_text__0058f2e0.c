/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0048F2E0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058f2e0; name: FUN_.text__0058f2e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0058f2e0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_d0 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = _DAT_008a4900; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = (ulong)((*(uint *)(*(long *)(param_1 + 0x28) + 4) & 0x7ffffffe) * 2 * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  *(int *)(param_1 + 0x20) + 0xf & 0xfffffff0);
  if (uVar3 < *(ulong *)(_DAT_008a4900 + 8) >> 2) { // [自动静态注释] 条件判断/分支
    puVar2 = auStack_d0 + (0x80 - (uVar3 + 0xf & 0x1fffffff0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar2 = (undefined1 *)FUN__text__00400f90(5,uVar3,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar2 == (undefined1 *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_1 + 4) = 2;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0058f030(param_1,param_2,param_3,param_4,param_5,puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(ulong *)(lVar1 + 8) >> 2 <= uVar3) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(5,puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


