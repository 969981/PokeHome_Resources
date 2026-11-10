/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004D5C70
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d5c70; name: FUN_.text__005d5c70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d5c70(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = FUN__text__006ebc54(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_1 + 0x78) = lVar3;
  lVar4 = *(long *)(lVar3 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = CONCAT44(local_70._4_4_,0x21); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = nn::util::BinaryBlockHeader::GetBlockSize(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_70 = CONCAT44(iVar2 + -0x10,(undefined4)local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_68 = lVar4 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ee680(*(undefined8 *)(lVar3 + 0x40),_DAT_008a0448,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  uVar1 = _DAT_008a0448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0 < *(int *)(*(long *)(lVar3 + 0x38) + 4)) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar5 = *(long *)(*(long *)(lVar3 + 0x28) + lVar4 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = *(long *)(lVar5 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006f5944(*(undefined8 *)(lVar5 + 0x80),uVar1,lVar5 + 0x10, // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined8 *)(lVar3 + 0x28),
                          (*(long *)(lVar3 + 0x30) - *(long *)(lVar3 + 0x10)) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                          **(long **)(lVar5 + 0x70) + -0x10,*(undefined4 *)(lVar5 + 0x50));
      local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_38 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006ebe70(&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_70 = CONCAT71(local_70._1_7_,*(undefined1 *)(lVar5 + 0x5c)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_70 = CONCAT44(*(undefined4 *)(lVar5 + 0x1c),(undefined4)local_70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(lVar5 + 0x58)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_40 = *(undefined8 *)(lVar5 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = CONCAT44(*(undefined4 *)(lVar5 + 0x30),(undefined4)local_50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60._0_4_ = CONCAT22(*(undefined2 *)(lVar5 + 0x16),(undefined2)local_60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006f5a88(*(undefined8 *)(lVar5 + 0x88),uVar1,&local_70); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = *(long *)(param_1 + 0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 < *(int *)(*(long *)(lVar3 + 0x38) + 4)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


