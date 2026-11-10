/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E4160
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e4160; name: FUN_.text__005e4160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e4160(long param_1,undefined8 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 8) == 0) { // [自动静态注释] 条件判断/分支
    local_38 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = FUN__text__005e4f08(&uStack_11,*(undefined8 *)(*_DAT_0089f7d0 + 0x28),&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_1 + 8) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 8) = lVar5;
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
    iVar1 = *(int *)(param_1 + 0x150); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
    iVar1 = *(int *)(param_1 + 0x150); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar4 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = *(long *)(param_1 + 0x10 + uVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(lVar5 + 0x3d8) = *(undefined4 *)(param_1 + 0x154);
      *(undefined8 *)(lVar5 + 0x3d0) = uVar4;
    } while (uVar3 < *(uint *)(param_1 + 0x150)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e42b0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005e3e10(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005e5810(*(undefined8 *)(param_1 + 0x10),param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(char *)(param_1 + 0x159) != '\0') { // [自动静态注释] 条件判断/分支
    cVar2 = *(char *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (cVar2 == '\0') { // [自动静态注释] 循环/迭代
      FUN__text__005e5b30(*(undefined8 *)(param_1 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
      cVar2 = *(char *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__005e44b0(param_1 + 0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005e42b0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__005e3e10(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


