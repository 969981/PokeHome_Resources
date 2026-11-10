/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B1440
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b1440; name: FUN_.text__006b1440
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b1440(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_118; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_110; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_108; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_100; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_f8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_f0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_e8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_e0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_d8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_d0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_c8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_b8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_b0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = _DAT_008a5970; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(lVar3 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0 < (int)uVar1) { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_a8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = *(undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               (*(long *)(*(long *)(lVar3 + 0x20) + uVar6 * 0x40 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                         *(long *)(lVar2 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68);
      local_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_90 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_88 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_b8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_b0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_a0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_98 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_c8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_c0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_d8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_d0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_e8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_e0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_f8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_f0 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_108 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_100 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_118 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_110 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__006b1570(param_1,&local_90,&local_108,&local_118,uVar6 & 0xffffffff); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar4 = FUN__text__006f49f0(&local_90); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = FUN__text__006a0ee8(uVar4,8); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006f4a84(lVar3 + uVar6 * 0x20,uVar5,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__006f4aa0(*(long *)(param_1 + 0x10) + uVar6 * 0x20,param_2,&local_90,uVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar6 != uVar1); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


