/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0004C080
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014c080; name: FUN_.text__0014c080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014c080(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_3c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float local_38 [2]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(*(long *)(param_1 + 0x60) + 0x78) == -1) { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 0x188) == 0) { // [自动静态注释] 条件判断/分支
      bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      bVar1 = *(int *)(*(long *)(param_1 + 0x188) + 0x78) == -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    fVar5 = *(float *)(*_DAT_0089f5b8 + 0x85a4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (**(code **)(**(long **)(param_1 + 0x1a0) + 0x58))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar3 & 1) != 0) { // [自动静态注释] 条件判断/分支
      local_38[1] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005bea28(*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0xb0),local_38 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_38[1] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = *(long *)(param_1 + 0x1b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x1c8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_38[0] = (1.0 - fVar5) * (float)iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0x1c0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_3c = fVar5 * (float)iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x1c0)); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_40 = fVar5 * (float)iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005bfdc4(*(undefined8 *)(lVar4 + 0xb0),local_38 + 1,local_38,&local_3c,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if ((bVar1) && (uVar3 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x58))(), (uVar3 & 1) != 0)) // [自动静态注释] 条件判断/分支
    { // [自动静态注释] 作用域/控制流边界
      local_38[1] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005bea28(*(undefined8 *)(*(long *)(param_1 + 0x1b8) + 0xb0),local_38 + 1); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_38[1] = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = *(long *)(param_1 + 0x1b8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x1c8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_38[0] = (1.0 - fVar5) * (float)iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0x1c8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_3c = fVar5 * (float)iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar2 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x1c8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_40 = fVar5 * (float)iVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__005bfdc4(*(undefined8 *)(lVar4 + 0xb0),local_38 + 1,local_38,&local_3c,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    local_48 = *(long *)(param_1 + 0x1d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (local_48 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00152a60(param_1 + 0x1d8,&local_48,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_48 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


