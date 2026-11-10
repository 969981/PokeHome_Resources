/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0045D280
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055d280; name: FUN_.text__0055d280
 */


undefined8 FUN__text__0055d280(long *param_1,long *param_2,undefined2 param_3,ushort param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(ushort *)((long)param_1 + 0xc) = param_4;
  *(undefined2 *)((long)param_1 + 0xe) = param_3;
  if (param_4 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)param_4 << 5,0x70bb37,0x24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = lVar4;
    if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while( true ) { // [自动静态注释] 循环/迭代
      if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
        puVar1 = (undefined8 *)(lVar4 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar1 = 0;
        puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if ((ulong)param_4 * 0x20 + -0x20 == lVar5) break; // [自动静态注释] 条件判断/分支
      lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = lVar5 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = (uint)param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_4 & 0xfffe) == 0) { // [自动静态注释] 条件判断/分支
      uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    do { // [自动静态注释] 循环/迭代
      iVar3 = FUN__text__0055d3a4(*param_1 + lVar4,param_2,param_3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar3 != 1) { // [自动静态注释] 条件判断/分支
        return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar4 = lVar4 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((ulong)uVar2 * 0x20 != lVar4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


