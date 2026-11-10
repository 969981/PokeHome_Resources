/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000DC0C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001dc0c0; name: FUN_.text__001dc0c0
 */


void FUN__text__001dc0c0(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int *piVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_170; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_16c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_168; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_160; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_158; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_150; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_148; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_140; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_138; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_130; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_128; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_120; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_118; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_110; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_108 [100]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_a4 [25]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  piVar1 = (int *)(param_1 + 0x8b3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0019c35c(auStack_108); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_120 = *(undefined8 *)(param_1 + 0x8b8c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_118 = *(undefined8 *)(param_1 + 0x8b94); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_110 = *(undefined4 *)(param_1 + 0x8b9c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_140 = *(undefined8 *)(param_1 + 0x8b6c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_138 = *(undefined8 *)(param_1 + 0x8b74); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_130 = *(undefined8 *)(param_1 + 0x8b7c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_128 = *(undefined8 *)(param_1 + 0x8b84); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_160 = *(undefined8 *)(param_1 + 0x8b4c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_158 = *(undefined8 *)(param_1 + 0x8b54); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_150 = *(undefined8 *)(param_1 + 0x8b5c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_148 = *(undefined8 *)(param_1 + 0x8b64); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_168 = *(undefined8 *)(param_1 + 0x8b44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  _local_170 = CONCAT44((int)((ulong)*(undefined8 *)piVar1 >> 0x20),param_2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = FUN__text__0019c518(&local_170,auStack_108); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    if (*piVar1 != param_2) { // [自动静态注释] 条件判断/分支
      if (*(long *)(param_1 + 0x18) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x138); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = (undefined8 *)(param_1 + 0x89c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *piVar1 = param_2;
      FUN__text__0019cd08(lVar4,piVar1,*(undefined1 *)(param_1 + 0x8ba3)); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined1 *)(param_1 + 0x89f8) = 0;
      *(undefined1 *)(param_1 + 0x8ba3) = 0;
      *(undefined2 *)(param_1 + 0x8ba0) = 1;
      if (*(long *)(*(long *)(param_1 + 0x89d0) + 0xe8) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(*(long *)(param_1 + 0x89d0) + 0xe8) = 0;
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__003b17ec(*puVar2,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003b17f8(*puVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003ad2d0(*puVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001d7830(*(undefined8 *)(param_1 + 0x38),*piVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0019c35c(local_a4); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001d91d8(*(undefined8 *)(param_1 + 0x40),*piVar1 != local_a4[0]); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__001db72c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__001dc250(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


