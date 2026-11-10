/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：HOME_SideData_CreateTLV
 * 用途/行为：创建 SideData TLV 的原生辅助入口
 * 证据等级：VERIFIED_NATIVE_STATIC；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0060e8b0; name: FUN_.text__0060e8b0
 */


void FUN__text__0060e8b0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint __c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = (undefined1 *)(lVar2 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((ulong)*(ushort *)(lVar2 + 0xd6) != 0) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      puVar3 = puVar3 + (ulong)*(ushort *)(puVar3 + 1) + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((ulong)((long)puVar3 - (lVar2 + 0x10)) < (ulong)*(ushort *)(lVar2 + 0xd6) + 200); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  memset(puVar3 + 3,0,(ulong)param_5); // [自动静态注释] 内存复制、清零或移动
  *puVar3 = param_4;
  *(short *)(puVar3 + 1) = (short)param_5;
  *(short *)(*(long *)(param_1 + 8) + 0xd6) =
       (short)param_5 + *(short *)(*(long *)(param_1 + 8) + 0xd6) + 3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0xd6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = (ulong)uVar1 + 200; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __c = 0x10 - (uVar1 + 8 & 0xf); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(*(long *)(param_1 + 8) + 0xe) = (short)__c + (short)lVar2;
  memset((void *)(*(long *)(param_1 + 8) + lVar2 + 0x10),__c,(ulong)__c); // [自动静态注释] 内存复制、清零或移动
  *param_2 = puVar3;
  *param_3 = puVar3 + 3;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


