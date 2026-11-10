/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00307280
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407280; name: FUN_.text__00407280
 */


void FUN__text__00407280(long param_1,undefined8 *param_2,long param_3,int *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_a0 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_90; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_80; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar2 = auStack_a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar5 = 1.0 / (float)*(ushort *)((long)param_2 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memcpy((void *)*param_5,(void *)*param_2, // [自动静态注释] 内存复制、清零或移动
         (ulong)*(ushort *)((long)param_2 + 0x12) * (ulong)*(byte *)(param_2 + 1) * 4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined2 *)((long)param_5 + 0x12) = *(undefined2 *)((long)param_2 + 0x12);
  if (*(char *)(param_1 + 0x9c) != '\0') { // [自动静态注释] 条件判断/分支
    puVar2 = auStack_a0 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             -(ulong)(((*(uint *)(param_5 + 1) & 0xff) * 4 + 0xc & 0x7f0) * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     (*(uint *)(param_3 + 8) & 0xff)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_98 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_90 = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_78 = 0x3f80000000000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_70 = 0xffff3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_88 = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_80 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_58 = 0x100003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = 0x3f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00481d28(&local_98,*(uint *)(param_3 + 8),*(uint *)(param_5 + 1),param_1 + 200,puVar2 // [自动静态注释] 调用尚未恢复正式名称的函数
                       ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_98 = 0x3f8000003f800000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    thunk_FUN__text__00420290 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (fVar5,param_3,param_5,&local_98,puVar2,puVar2,*(undefined2 *)(param_3 + 0x12)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  if (0 < *param_4) { // [自动静态注释] 条件判断/分支
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar1 = *(long *)(*(long *)(param_4 + 2) + lVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = *(long *)(*(long *)(param_4 + 4) + lVar3 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = puVar2 + -(ulong)(((*(uint *)(param_5 + 1) & 0xff) * 4 + 0xc & 0x7f0) * // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                                (*(uint *)(lVar1 + 8) & 0xff)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00481d28(lVar4 + 8,*(uint *)(lVar1 + 8),*(uint *)(param_5 + 1),param_1 + 200,puVar2 // [自动静态注释] 调用尚未恢复正式名称的函数
                         ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      thunk_FUN__text__00420290 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (fVar5,lVar1,param_5,lVar4 + 0x50,puVar2,puVar2,*(undefined2 *)(lVar1 + 0x12)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = lVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined2 *)((long)param_5 + 0x12) = *(undefined2 *)(param_5 + 2);
    } while (lVar3 < *param_4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


