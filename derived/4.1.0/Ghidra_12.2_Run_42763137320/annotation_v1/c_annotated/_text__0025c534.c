/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0015C534
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025c534; name: FUN_.text__0025c534
 */


ulong FUN__text__0025c534(long param_1,long *param_2,int param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = FUN__text__0063c6c8(param_3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar2 = uVar2 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*param_2 != 0) && (uVar3 = FUN__text__00306588(), (uVar3 & 1) == 0)) && // [自动静态注释] 条件判断/分支
     (uVar3 = FUN__text__003279d0(*(undefined4 *)(param_1 + 0x1000)), (uVar3 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = FUN__text__003065f8(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((param_3 == 0x222) && (iVar1 == 0x289)) { // [自动静态注释] 条件判断/分支
      iVar1 = FUN__text__003068a0(*param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((iVar1 - 0x74U & 0xffff) < 4) { // [自动静态注释] 条件判断/分支
        uVar2 = (ulong)(0xe090c0a >> (ulong)((iVar1 - 0x74U & 3) << 3)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (param_3 == 0x4a) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__0063c6c8(0x4a,7); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


