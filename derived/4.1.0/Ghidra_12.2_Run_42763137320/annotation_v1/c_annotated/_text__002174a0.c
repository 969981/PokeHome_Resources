/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001174A0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002174a0; name: FUN_.text__002174a0
 */


undefined8 FUN__text__002174a0(undefined8 param_1,long *param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_2 != (long *)0x0) && (param_3 != 0)) { // [自动静态注释] 条件判断/分支
    uVar3 = (**(code **)(*param_2 + 0x40))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_3 + 0x2c) = uVar3;
    uVar1 = (**(code **)(*param_2 + 0x78))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)(param_3 + 0x49) = uVar1;
    uVar5 = FUN__text__00215634(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar5 = (**(code **)(*param_2 + 0x38))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
        uVar4 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)(param_3 + 0x35) = 1;
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined1 *)(param_3 + 0x35) = 0;
        bVar2 = (**(code **)(*param_2 + 0x50))(param_2,param_3 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(byte *)(param_3 + 0x37) = bVar2 & 1;
        bVar2 = (**(code **)(*param_2 + 0x80))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(byte *)(param_3 + 0x34) = bVar2 & 1;
        bVar2 = (**(code **)(*param_2 + 0x48))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(byte *)(param_3 + 0x36) = bVar2 & 1;
        uVar3 = (**(code **)(*param_2 + 200))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(param_3 + 0x1a) = uVar3;
        (**(code **)(*param_2 + 0x68))(param_2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar1 = (**(code **)(*param_2 + 0x70))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined1 *)(param_3 + 0x48) = uVar1;
        uVar3 = (**(code **)(*param_2 + 0x58))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(param_3 + 0x60) = uVar3;
        uVar3 = (**(code **)(*param_2 + 0x90))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(param_3 + 0x24) = uVar3;
        uVar3 = (**(code **)(*param_2 + 0x60))(param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(param_3 + 0x44) = uVar3;
        (**(code **)(*param_2 + 0x118))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*param_2 + 0x120))(param_2,param_3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar4 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


