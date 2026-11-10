/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0005CA10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015ca10; name: FUN_.text__0015ca10
 */


void FUN__text__0015ca10(long param_1,int param_2,ushort param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(ushort *)(param_1 + 0x19c) = param_3 & 1;
  uVar1 = FUN__text__0016a510(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((uVar1 & 0xff) < 0xc) && ((1 << (ulong)(uVar1 & 0x1f) & 0x8bcU) != 0)) { // [自动静态注释] 条件判断/分支
    lVar4 = (long)param_2 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3 = (undefined4 *)(lVar4 + 0x724c30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = (undefined4 *)(lVar4 + 0x724c00); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
      puVar3 = (undefined4 *)(lVar4 + 0x724a50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = (undefined4 *)(lVar4 + 0x724bb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = (long)param_2 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar3 = (undefined4 *)(lVar4 + 0x724a50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = (undefined4 *)(lVar4 + 0x724830); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_3 & 1) != 0) { // [自动静态注释] 条件判断/分支
      puVar3 = (undefined4 *)(lVar4 + 0x724c30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = (undefined4 *)(lVar4 + 0x7249a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005f4f7c(param_1,*puVar3,*puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


