/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003D5200
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d5200; name: FUN_.text__004d5200
 */


void FUN__text__004d5200(undefined8 param_1,long param_2,ulong param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long alStack_410 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(uint *)(param_2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(param_2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (((*(byte *)(lVar4 + 0x198) ^ 0xff) & 3) != 0 && (*(byte *)(lVar4 + 0x198) & 4) != 0) { // [自动静态注释] 条件判断/分支
        iVar2 = *(int *)(lVar4 + 0x148); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long *)((long)alStack_410 + (uVar3 * 8 - ((ulong)uVar1 * 8 + 0xf & 0xffffffff0)) + 0x400)
             = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = (ulong)((int)uVar3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        param_3 = (ulong)(uint)(iVar2 + (int)param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      lVar4 = *(long *)(lVar4 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != 0); // [自动静态注释] 循环/迭代
    if ((int)uVar3 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__004d4f40(); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00413d04(param_1,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


